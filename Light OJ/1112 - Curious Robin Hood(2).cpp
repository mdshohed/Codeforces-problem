/**
    problem: 1112 - Curious Robin Hood 
    algorithm: Binary Indexed Tree 
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll inf = 1LL<<62;

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
int tree[mx];

int sum(int idx ) {
    int s = 0;
    while (idx>0) {
        s += tree[idx];
        idx -= idx&(-idx);
    }
    return s;
}

void update(int idx, int val, int n) {
    while ( idx<=n ) {
        tree[idx]+=val;
        idx += idx & (-idx);
    }
}

void build(int n) {
    for (int i = 1; i<=n; i++) {
        update(i,ara[i],n);
    }
}

int main() {
    //read("in.txt");
    //ios::sync_with_stdio(false),cin.tie(nullptr);

    int t, cases = 0;
    sci(t);
    while ( t-- ) {
        memset( ara,0,sizeof(ara));
        memset( tree,0,sizeof(tree));
        int n , m;
        scii(n, m);
        for (int i = 1; i<=n; i++) {
            sci(ara[i]);
        }
        build(n);

        printf( "Case %d:\n",++cases);
        for (int i = 0; i<m; i++) {
            int x;
            sci(x);

            if ( x==1 ) {
                int a;
                sci(a);
                a++;
                ll x = ara[a];
                printf( "%lld\n", x);
                ara[a] = 0;
                update(a, -x, n);
            }
            else if ( x==2 ) {
                int a, b;
                scii(a,b);
                a++;
                ara[a] += b;
                update( a, b, n);
            }
            else if ( x==3) {
                int a, b;
                scii(a,b);
                a++, b++;
                ll x = sum(b)- sum(a-1);
                printf( "%lld\n",x);
            }
        }
    }
    return 0;
}
