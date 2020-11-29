#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main() {
     ios::sync_with_stdio(false),cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) {

       ll n, sum = 0;
       cin >> n;
       if ( n>0) {
            for (int i = 1; i<=n; i++) {
                sum += i;
            }
            cout << sum << endl;
       }
       else {

            for (int i = n; i<=1; i++) {
                sum += i;
            }
            cout << sum << endl;
       }
    }
    return 0; 
}
