#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int sum(int n){
 
    int ans = 0;
    while (n){
        ans+=n/5;
        n/=5;
    }
    return ans;
}
 
int main(){
    //freopen( "in.txt", "r", stdin);
    int t, cases = 0;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        ll l = 0, r = 10000000000, mid;
        while( l<=r ){
            mid = (l+r)/2;
            int k = sum(mid);
            if ( k==n){
                ans = mid;
                r = mid - 1;
            }
            else if ( k < n) l = mid +1;
            else r = mid - 1;
        }
        printf( "Case %d: ",++cases);
        if (!ans) cout << "impossible" << endl;
        else cout << ans << endl;
    }
    return 0;
}
