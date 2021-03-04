#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function( string s, int n ) {
    vector<int> v(n);
    v[0] = 0;
    for (int i = 1; i<n; i++) {
        int j = v[i-1];
        while ( j>0 && s[i]!= s[j] ) {
            j = v[j-1];
        }
        if (s[i]==s[j]) {
            ++j;
        }
        v[i] = j;
    }
    return v;
}

void kmp(string s, string t) {
    int n = s.size();
    int m = t.size();

    vector<int> prefix = prefix_function(t,m);

    for (int i = 0, j = 0; i<n; i++ ) {
        while ( j>0 && s[i]!= t[j] ) {
            j = prefix[j-1];
        }
        if ( s[i]==t[j]) {
            ++j;
        }
        if ( m==j) {
            cout << i-m+1 << endl;
            j = prefix[j-1];
        }
    }
}

int main() {
    //freopen( "in.txt", "r", stdin );

    int n;
    while ( scanf( "%d",&n) != EOF) {
        string a, b;
        cin >> a >> b;
        if ( a.size()>b.size() ) cout << endl;
        else kmp( b, a );
    }
}
