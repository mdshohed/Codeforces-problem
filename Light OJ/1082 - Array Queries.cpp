/*
Algorithm: segment tree
input: 

output: 

*/

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
int ara[mx];
int tree[mx*4];

int init(int node, int l, int r){
    if ( l == r) {
        tree[node] = ara[l];
        return ara[l];
    }
    int x, y;
    int mid = (l+r)/2;
    x = init(node*2, l, mid);
    y = init( node*2+1, mid+1,r);
    tree[node] = min(x,y);
    return tree[node];
}

int query(int v, int l, int r, int i, int j){
    if ( i>r || j<l) return INT_MAX;
    if ( i<=l && j>=r){
        return tree[v];
    }
    int x, y;
    int mid = (l+r)/2;
    x = query(v*2, l , mid, i , j);
    y = query(v*2+1, mid+1,r, i , j);
    return min(x,y);
}

int main(){


    //freopen( "in.txt", "r", stdin );
    int t, cases=0;
    scanf("%d",&t);
    while(t--){
       int n, k;
       scanf("%d%d",&n,&k);
       for (int i = 1; i<=n; i++){
            scanf("%d",&ara[i]);
       }
       init(1, 1, n);
       printf ( "Case %d:\n",++cases);
       for (int i = 0; i<k; i++){
            int x, y;
            scanf("%d%d",&x,&y);
            printf("%d\n",query(1, 1, n, x, y));
       }
    }
    return 0;
}
