/*
input:
2
2
soda wine    0  1
water wine   2  1
3
soda wine    0   1
water wine   2   1
wine water   1   2

output:
Case 1: Yes
Case 2: No

*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define EMPTY_VALUE -1
#define CLR(x,y) memset( x,y,sizeof(x))
#define FOR(x,n) for(int i = x; i<n; i++)
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen( x, "w", stdout);

typedef long long ll;
typedef pair<int,int> pii;


const int MOD = 1e9+7;
const int mx = 1e4+9;

map<string,int> mp;
vector<int> adj[mx];
int color[mx];
bool cycle = false;


void dfsvisit(int u){
    color[u] = 1;
    for (auto v:adj[u]) {
        if ( color[v]==0 ) {
            dfsvisit(v);
        }
        else if ( color[v]==1) {
            cycle = true;
            return ;
        }
    }
    color[u] = 2;
}

void dfs(int u){
    memset( color,0,sizeof(color));
    for (int i = 0; i<u; i++) {
        if (cycle ) return ;
        if ( color[i]==0 ) {
            dfsvisit(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //read( "in.txt" );
    //write("out.txt");
    int t, cases = 0;
    cin >> t;
    while (t--){

        int n, x = 0;
        cin >> n;
        for (int i = 0; i<n; i++){
            string s1, s2;
            cin >> s1 >> s2;

            if (mp.find(s1)==mp.end()){
                mp[s1] = x++;
            }
            if (mp.find(s2)==mp.end()) {
                mp[s2] = x++;
            }
            adj[mp[s1]].push_back(mp[s2]);
        }

        dfs(x);

        cout << "Case " << ++cases << ": ";
        if (cycle) cout << "No" << endl;
        else cout << "Yes" << endl;

        for (int i=0; i<x; i++) adj[i].clear();
        mp.clear();
        cycle = false;
    }
    return 0;
}
