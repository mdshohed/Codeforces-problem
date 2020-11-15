/*
problem: 1230 - MODEX
algorithm: 
input: 

output: 

*/

#include <bits/stdc++.h>
using namespace std; 

ll binpow(int a, int b, int c) {
     a%=c;
     ll ans = 1;
     while ( b>0) {
        if ( b&1) ans = ans*a%c;
        a = a*a%c;
        b>>=1;
     }
     return ans;
}

int main (){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int t;
    cin >> t;
    while ( t--) {
        int a, b, c;
        cin >> a >> b >> c;
        ll ans = binpow( a, b, c);
        cout << ans << endl;
    }
    return 0;
}
