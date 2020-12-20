/**
    problem: 1112 - Curious Robin Hood 
    algorithm: segment tree
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define xx first
#define yy second
#define pb push_back
#define sci(x) scanf( "%d",&x);
#define scii(x,y) scanf("%d%d",&x,&y);
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define clr(x,y) memset(x,y,sizeof(x))
#define LSB(i) ((i) & -(i))
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);
#define db(x) cout << #x << " -> " << x << endl;
#define dbgsarr(i,a) cout<<#a<<"["< "< "< "<>p ; return p;}

const int mx = 1e5+7;
int ara[mx];
int tree[mx*3];
int x, val;

void build(int node, int l, int r) {
    if ( l==r ) {
        tree[node] = ara[l];
        return;
    }
    int mid = (l+r)/2;
    build(node*2, l, mid);
    build( node*2+1, mid+1, r);
    tree[node] = tree[node*2] + tree[node*2+1];
}

void update(int node, int l, int r, int i) {
    if ( i>r||i<l) return;
    if ( i<=l && r<=i ) {
        if ( x==1) {
            tree[node] = 0;
        }
        if ( x==2) {
            tree[node] += val;
        }
        return;
    }
    int mid = (l+r)/2;
    update( node*2, l, mid, i);
    update( node*2+1, mid+1, r, i);
    tree[node] = tree[node*2] + tree[node*2+1];
}

ll sum(int node, int l, int r, int i, int j) {
    if ( i>r || j<l) return 0;
    if ( i<=l&&r<=j) {
        return tree[node];
    }
    int mid = (l+r)/2;
    return sum(node*2,l,mid,i,j)+sum(node*2+1,mid+1,r, i,j);
}

int main() {
    //read("in.txt");
    //ios::sync_with_stdio(false),cin.tie(nullptr);

    int t, cases = 0;
    scanf( "%d",&t);
    while (t--) {
        int n, m;
        scanf( "%d%d",&n,&m);
        for (int i = 1; i<=n; i++) {
            scanf( "%d",&ara[i]);
        }
        build(1 , 1, n);

        printf( "Case %d:\n",++cases);
        for (int i = 0; i<m; i++) {

            sci(x);
            if ( x==1) {
                int a;
                sci(a);
                a++;
                update( 1, 1, n, a);
                printf( "%d\n",ara[a]);
                ara[a] = 0;
            }
            else if ( x==2 ) {
                int a;
                scii(a,val);
                a++;
                update( 1, 1, n, a);
                ara[a] += val;
            }
            else if ( x==3) {
                int a, b;
                scii(a,b);
                a++, b++;
                printf( "%d\n",sum(1,1,n,a,b));
            }
        }
    }
    return 0;
}
