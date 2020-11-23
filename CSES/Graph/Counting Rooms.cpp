#include <bits/stdc++.h>
using namespace std;

int fx[] = {0, 0, 1, -1, -1, -1, 1, 1};
int fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

const int mx = 1002;
char matrix[mx][mx];
bool visit[mx][mx];
int n, m;

void dfs(int x, int y) {
    if ( (x<0||x>=n) && (y<0||y>=m) ) return;
    if ( matrix[x][y]!='.' || visit[x][y] ) return;
    visit[x][y] = 1;
    for (int i = 0; i<4; i++) {
        dfs( x+fx[i], y+fy[i]);
    }

}
int main(){
    //freopen( "in.txt", "r", stdin );
    ios::sync_with_stdio(false),cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if ( matrix[i][j]=='.' && !visit[i][j] ) {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;

}
