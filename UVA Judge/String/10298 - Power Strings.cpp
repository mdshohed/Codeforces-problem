#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function( string s) {
    int n = s.size();
    vector<int> f(n);
    f[0] = 0;
    for ( int i = 1; i<n; i++) {
        int j = f[i-1];
        while ( j>0 && s[i]!=s[j] ){
            j = f[j-1];
        }
        if ( s[i]==s[j] ) {
             ++j;
        }
        f[i] = j;
    }
    return f;
}

int main() {

    string s;
    while (1) {
        cin >> s;
        if ( s[0]== '.') break;

        int n = s.size();
        vector<int> v = prefix_function(s);

        cout << n/(n-v[n-1]) << endl;
    }
}
