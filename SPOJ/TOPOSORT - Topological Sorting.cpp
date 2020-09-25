/*
problem: TOPOSORT - Topological Sorting
algorithm: topological
Input:
8 9
1 4
1 2
4 2
4 3
3 2
5 2
3 5
8 2
8 6
Output:
1 4 3 5 7 8 2 6

*/
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define EMPTY_VALUE -1
#define inf  1<<28
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);

typedef long long ll;
typedef vector<int> v;
typedef pair<int,int> pii;
//typedef map<string,int> mp;

const int MOD = 1e9+7;
const int mx = 1e4+9;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

vector<int> adj[mx];
int color[mx];
vector<int> path;
#define white 0
#define gray 1
#define black 2
bool cycle;

bool com(int a, int b) {
    return a>b;
}

void dfs(int u) {
    color[u] = gray;
    for ( auto v:adj[u] ) {
        if ( color[v]==white) {
            dfs(v);
        }
        else if (color[v]==gray) {
            cycle = true;
            return;
        }
    }
    color[u] = black;
    path.push_back(u);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    //read( "in.txt");
    int n, e;
    cin >> n >> e;
    for (int i = 0; i<e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    cycle = false;
    for(int i = 1; i<=n; i++) {
        sort(adj[i].begin(),adj[i].end(),com);    
    }
    for (int i = n; i>=1; i--) {
        if (color[i]==white){
            dfs(i);
        }
    }
    if (cycle) cout << "Sandro fails." << endl;
    else {
        for (int i = n-1; i>=0; i-- ) {
            if (i==0) cout << path[i] << endl;
            else cout << path[i] << " ";
        }
    }
    return 0;
}
