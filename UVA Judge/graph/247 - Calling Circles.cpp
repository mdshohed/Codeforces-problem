/*
problem:  247 - Calling Circles 
algorithm: SCC 

input:
5 6
Ben Alexander
Alexander Dolly
Dolly Ben
Dolly Benedict
Benedict Dolly
Alexander Aaron

output:
Calling circles for data set 1:
Ben, Alexander, Dolly, Benedict
Aaron
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
const int x = 1e4+9;
const int mx = 50;

int fx[] = {+0, +0, +1, -1};
int fy[] = {+1, -1, +0, +0};

vector<int> adj[mx], rev_adj[mx];
bool visit[mx];
vector<int> q;
string name[mx];
map<string,int> mp;
vector<string> component;

void dfs(int u) {
    if(visit[u]) return;
    visit[u] = true;
    for (auto v:adj[u]) {
        dfs(v);
    }
    q.push_back(u);
}

void dfs2( int u ) {
    if (!visit[u]) return;
    visit[u] =  false;
    component.push_back(name[u]);
    for (auto v:rev_adj[u]) {
        dfs2(v);
    }
}

int main(){

    //read( "in.txt");
    int n , e, cases = 0;
    while (scanf("%d%d",&n,&e) && (n!=0&&e!=0) ) {
        //if ( n==0&&e==0) break;
        q.clear();
        for (int i = 0; i<mx; i++) {
            adj[i].clear(), rev_adj[i].clear();
        }
        CLR(visit,false);
        mp.clear();
        int cnt = 0;
        for (int i = 0; i<e; i++) {
            string s1, s2;
            cin >> s1 >> s2;
            int u = mp[s1];
            int v = mp[s2];
            if ( u==0) {
                u = mp[s1] = ++cnt;
                name[u] = s1;
            }
            if ( v==0 ) {
                v = mp[s2] = ++cnt;
                name[v] = s2;
            }
            //cout << u << " " << v << endl;
            adj[u].push_back(v);
            rev_adj[v].push_back(u);
        }
        for (int i = 1; i<=n; i++) {
            if(!visit[i]) {
                dfs(i);
            }
        }
        cout << "Calling circles for data set " << ++cases << ":" << endl;
        for (int i = n-1; i>=0; i--) {
            if (visit[q[i]]) {
                dfs2(q[i]);
                for (int i = 0; i<component.size(); i++) {
                    cout << component[i];
                    if ( i<component.size()-1) cout << ", ";
                }
                component.clear();
                cout << endl;
            }
        }
    }
    return 0;
}
