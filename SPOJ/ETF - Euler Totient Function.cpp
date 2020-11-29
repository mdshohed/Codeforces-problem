/**
    problem: ETF - Euler Totient Function
    algorithm: Euler totient 
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main() {
    //read("in.txt");
    ios::sync_with_stdio(false),cin.tie(nullptr);
 
    int t;
    cin >> t;
    while ( t-- ) {
        int n;
        cin >> n;
        int ret = n;
       for (int i = 2; i*i<=n; i++) {
            if ( n%i==0) {
                while ( n%i==0 ) {
                    n/=i;
                }
                ret = ret-ret/i;
            }
       }
       if ( n>1) ret = ret - ret/n;
       cout << ret << endl;
    }
 
    return 0;
}
 
