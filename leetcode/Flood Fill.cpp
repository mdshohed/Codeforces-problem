class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        const int dx[] = {0,1,0,-1};
        const int dy[] = {1,0,-1,0};
        int n = image.size(), m = image[0].size();
        queue<pair<int,int>> q; 
        vector<vector<int>> vis(n,vector<int>(m,0)); 
        q.push({sr,sc}); 
        vis[sr][sc] = 1; 
        int old = image[sr][sc];  
        image[sr][sc] = newColor; 
        while(!q.empty()) {
            auto it = q.front(); 
            q.pop();
            int u = it.first, v = it.second; 
            for(int i = 0; i<4; i++) {
                int x = dx[i] + u; 
                int y = dy[i] + v; 
                if (0<=x&&x<n && 0<=y&&y<m && image[x][y]==old) {
                    if (!vis[x][y]) {
                        vis[x][y] = 1; 
                        image[x][y] = newColor; 
                        q.push({x,y});
                    }
                } 
            }
        }
        return image;
    }
};
