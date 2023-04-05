class Solution {
    
private:
    vector<int> x = {1,-1, 0, 0 };
    vector<int> y = {0, 0, 1, -1};
    
    void dfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        
    if (row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && !vis[row][col] && grid[row][col] == '1')
    {
        vis[row][col] = 1;
        
        for (int i = 0; i < 4; i++) {
            int newRow = x[i] + row;
            int newCol = y[i] + col;
            dfs(newRow, newCol, grid, vis);
        }
    }
}
    
public:
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        //vis matrix
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        int cnt=0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] and grid[i][j] == '1')
                {
                    cnt++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return cnt;
    }
};