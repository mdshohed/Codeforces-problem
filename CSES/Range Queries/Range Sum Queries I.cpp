/**
    problem: Range Sum Queries I
    algorithm: segment tree
*/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const ll mx = 2e5+7;
ll ara[mx];
ll tree[mx*3];
 
void build(ll node, ll l, ll r) {
    if ( l==r ) {
        tree[node] = ara[l];
        return;
    }
    ll mid = (l+r)/2;
    build( node*2, l, mid);
    build( node*2+1, mid+1, r);
    tree[node] = tree[node*2] + tree[node*2+1];
}
 
ll sum(ll node, ll l,ll r, ll i, ll j) {
    if ( i>r||j<l) return 0;
    if ( i<=l&&j>=r) {
        return tree[node];
    }
    ll mid = (l+r)/2;
    return sum(node*2,l,mid,i,j)+sum(node*2+1,mid+1,r,i,j);
}
 
int main() {
    //freopen( "in.txt", "r", stdin );
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
 
    ll n , m;
    cin >> n >> m;
    for (int i = 1; i<=n; i++) {
        cin >> ara[i];
    }
 
    build(1,1,n);
 
    for (int i = 1; i<=m; i++) {
        ll x, y;
        cin >> x >> y;
        ll s = sum(1,1,n,x,y);
        cout << s << endl;
    }
    cout << endl;
    return 0;
}
