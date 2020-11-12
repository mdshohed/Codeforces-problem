/*
problem: 1012 - Guilty Prince 
algorithm: DFS
input:
1
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
output: 
Case 1: 45
*/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend();
#define EMPTY_VALUE -1
#define inf 1<<28
#define CLR(x,y) memset( x,y,sizeof(x))
#define Fill(x,y) fill(begin(x),end(x),y)
#define FOR(x,n) for(int i = x; i<n; i++)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);
#define db(x) cout << #x << " -> " << x << endl;

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
typedef map<string,int> mp;

const int mod = 1e9+7;

// direction array
int fx[] = {0, 0, 1, -1, -1, -1, 1, 1};
int fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

// king move
int kx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int ky[] = {2, -2, 1, -1, 2, -2, 1, -1};
/*===========================*/

const int mx = 22;
char ara[mx][mx];
int ans = 0;
int n, m;

void dfs(int x, int y) {
    if ( x<0||x>=m ) return;
    if ( y<0 || y>=n ) return;

    if ( ara[x][y]=='#' ) return;
    ara[x][y] = '#';
    ans++;
    for (int i = 0; i<4; i++){
        int next_x = x+fx[i];
        int next_Y = y+fy[i];
        dfs ( next_x, next_Y);
    }
}

int main (){
#ifdef __sh
    //clock_t start = clock();
    read("in.txt");
    //write( "out.txt");
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, cases = 0;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> n >> m;
        for (int i = 0; i<m; i++) {
            for (int j = 0; j<n; j++) {
                cin >> ara[i][j];
            }
        }
        for (int i = 0; i<m; i++) {
            for (int j = 0; j<n; j++) {
                if ( ara[i][j]=='@') x=i, y = j;
            }
        }
        dfs(x,y);
        cout << "Case " << ++cases << ": " << ans << endl;
        ans = 0;
    }

    return 0;
}
