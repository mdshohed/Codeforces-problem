/**
    problem: 1082 - Array Queries.cpp
    algorithm: segment tree
*/
#include <bits/stdc++.h>

using namespace std;

const int mx = 1e5+7;
int ara[mx];
int tree[mx*3];

void build(int node, int l, int r ) {
    if ( l==r ) {
        tree[node] = ara[l];
        return;
    }
    int mid = (l+r)/2;
    build( node*2,l, mid );
    build( node*2+1, mid+1, r);
    tree[node] = min( tree[node*2], tree[node*2+1]);
}

int min_value(int node, int l, int r, int i, int j) {
    if ( i>r|| j<l) return INT_MAX;
    if ( i<=l&&j>=r) {
        return tree[node];
    }
    int mid = (l+r)/2;
    int x =  min_value(node*2,l,mid, i,j);
    int y = min_value( node*2+1, mid+1, r, i, j);
    return min( x,y);
}

int main() {
    freopen( "in.txt", "r", stdin);

    int t = 1, cases = 0;
    scanf( "%d",&t);
    while (t--) {

        int n, m;
        scanf( "%d%d",&n,&m);
        for (int i = 1; i<=n; i++) scanf( "%d",&ara[i]);
        build(1,1,n);

        printf( "Case %d:\n",++cases);
        for (int i = 0; i<m; i++) {
            int x, y;
            scanf( "%d%d",&x,&y);
            int ans = min_value(1,1,n,x,y);
            printf("%d\n",ans);
        }
    }
    return 0;
}
