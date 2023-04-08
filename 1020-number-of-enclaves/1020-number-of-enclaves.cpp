class Solution {
public:
    
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<int>>&grid)
    {
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> x = {1, -1, 0, 0};
        vector<int> y = {0, 0, 1, -1};
        
        for(int i=0; i<4; i++)
        {
            int nrow = row+x[i];
            int ncol = col+y[i];
            
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and !vis[nrow][ncol] and grid[nrow][ncol]==1)
            {
                dfs(nrow, ncol, vis, grid);
            }
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>vis(row, vector<int>(col, 0));
        
        //boundary check
        //1st row and last row
       for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(i==0 || j==0 || i==row-1 || j==col-1){
                    if(grid[i][j]==1 and !vis[i][j])
                        dfs( i, j, vis, grid);
                }  
            }
        }
        
        int moves=0;
        /* counting the number of 1's */
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]==1 and !vis[i][j]){
                    moves++;
                }  
            }
        }
        return moves;   
        
    }
};