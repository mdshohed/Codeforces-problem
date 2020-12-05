#include <bits/stdc++.h>
using namespace std;

const int mx = 1e7+7;
const int m = 1e5+7;
bitset<mx> prime;
int ara[m];
int tree[m*3];

void sieve() {
    prime[1] = 1;
    for (int i = 2; i*i<=mx; i++) {
        if ( !prime[i]) {
            for (int j = i*i; j<=mx; j+=i) {
                prime[j] = 1;
            }
        }
    }
}

void build(int node, int l, int r) {
    if ( l==r) {
        int x = prime[ara[l]];
        if (!x) x = 1;
        else if (x) x = 0;
        tree[node] = x;
        return;
    }
    int mid = (l+r)/2;
    build( node*2, l, mid);
    build(node*2+1, mid+1, r);
    tree[node] = tree[node*2] + tree[node*2+1];
}

void update(int node, int l, int r, int i, int k) {
    if ( i>r||i<l) return;
    if ( i<=l&&r<=i) {
        int x = prime[k];
        if (!x) x = 1;
        else if (x) x = 0;
        tree[node] = x;
        return;
    }
    int mid = (l+r)/2;
    update(node*2, l, mid, i, k);
    update( node*2+1, mid+1, r, i, k);
    tree[node] = tree[node*2] + tree[node*2+1];
}

int sum(int node, int l, int r, int i, int j) {
    if ( i>r||j<l) return 0;
    if ( i<=l&&r<=j) {
        return tree[node];
    }
    int mid = (l+r)/2;
    return sum(node*2,l, mid, i, j) + sum( node*2+1, mid+1, r, i, j);

}

int main() {
    //freopen( "in.txt", "r", stdin );
    ios::sync_with_stdio(false), cin.tie(nullptr); 
    
    sieve();
    int n , q;
    cin >> n;
    for (int i = 1; i<=n; i++) {
        cin >> ara[i];
    }
    build( 1, 1, n);

    cin >> q;
    for (int i = 1; i<=q; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if ( x==1) {
            int x = sum(1,1,n, y, z);
            cout << x << endl;
        }
        else {
            update(1, 1, n, y, z);
        }
    }
    return 0;
}
