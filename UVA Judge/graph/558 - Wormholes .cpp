/*
problem: 558 - Wormholes
algorithm: bellman ford
input: 
2
3 3
0 1 1000
1 2 15
2 1 -42
4 4
0 1 10
1 2 20
2 3 30
3 0 -60
output: 

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
typedef map<string,int> mp;

const int MOD = 1e9+7;
const int mx = 1e4+9;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

struct node {
    int u, v, w;
};

node adj[mx];
int dis[mx];
int n, e;

int bellman_ford(int source){
    for (int i = 0; i<n; i++) {
        dis[i] = inf;
    }
    dis[source] = 0;
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j<e; j++) {
            if ( dis[adj[i].u] + adj[j].w < dis[adj[j].v] ) {
                dis[adj[j].v] = dis[adj[j].u] + adj[j].w;
            }
        }
    }
    for (int i = 0; i<n; i++) {
        if ( dis[adj[i].v] > dis[adj[i].u] + adj[i].w) return 0;
    }
    return 1;
}

int main(){

    //read("in.txt");
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> e;
        for (int i = 0; i<e; i++) {
            cin>> adj[i].u >> adj[i].v >> adj[i].w;
        }
        int x = bellman_ford(0);
        if(x) cout << "not possible" << endl;
        else cout << "possible" << endl;
    }
    return 0;
}
