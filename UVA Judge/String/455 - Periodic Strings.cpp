#include <bits/stdc++.h>
using namespace std;

int prefix_function(string s) {
    int n = s.size();
    vector<int> v(n);
    v[0] = 0;
    for (int i = 1; i<n; i++ ) {
        int j = v[i-1];
        while ( j>0 && s[i]!=s[j]) {
            j = v[j-1];
        }
        if (s[i]==s[j]) ++j;
        v[i] = j;
    }
    return v[n-1]-1;
}

int main(){

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int  n = prefix_function(s);

        int ans = s.size()- n - 1;
        if ( s.size()%ans==0) cout << ans << endl;
        else cout << s.size() << endl;

        if (t) puts("");
    }
}
