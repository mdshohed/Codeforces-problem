/*
    Algorithms: MergeSort for Inversion  check.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx = 2e5+7;
ll ara[mx];
ll ans = 0;

void Merge( ll l, ll mid, ll r) {
    ll i = l, j = mid+1, pos = 0;
    ll temp[mx];
    while ( i<=mid && j<=r ) {
        if ( ara[i]<=ara[j]) {
            temp[pos++] = ara[i++];
        }
        else {
            ans = ans + (mid - i+1);
            temp[pos++] = ara[j++];
        }
    }
    while ( i<=mid) temp[pos++] = ara[i++];
    while ( j<=r ) temp[pos++] = ara[j++];
    for ( ll m = 0; m<pos; m++) {
        ara[ l+m] = temp[m];
    }
}

void Merge_sort( ll left, ll right) {
    if ( left<right)  {
        ll mid = ( left+right)/2;
        Merge_sort( left, mid);
        Merge_sort ( mid+1, right);
        Merge( left, mid, right);
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i<n; i++) cin >> ara[i];
        Merge_sort( 0, n-1);
        cout << ans << endl;
        ans = 0;
    }
}
