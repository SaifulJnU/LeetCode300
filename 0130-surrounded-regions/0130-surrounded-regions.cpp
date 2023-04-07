class Solution {
public:
    
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<char>>&board)
    {
            int n = board.size();
            int m = board[0].size();
            vis[row][col] = 1;
            
            vector<int> x = {1,-1,0,0};
            vector<int> y = {0,0,1,-1};
        
        for(int i=0; i<4; i++)
        {
            int newRow = x[i]+row;
            int newCol = y[i]+col;
            
            if(newRow>=0 and newRow<n and newCol>=0 and newCol<m and vis[newRow][newCol]==0 and board[newRow][newCol]=='O')
            {
                dfs(newRow, newCol, vis, board);
            }
        }
    }
    
   void solve(vector<vector<char>>& board) {
        
    int n = board.size();
    int m = board[0].size();
    vector<vector<int>>vis(n, vector<int>(m, 0));
        
    //4 boundary check
    //1st row
    for(int j=0; j<m; j++)
    {
        if(!vis[0][j] and board[0][j]=='O')
        {
            dfs(0, j, vis, board);
        }
    }
    //last row
    for(int j=0; j<m; j++)
    {
        if(!vis[n-1][j] and board[n-1][j]=='O')
        {
            dfs(n-1, j, vis, board);
        }
    }
    //1st col
    for(int i=0; i<n; i++)
    {
        if(!vis[i][0] and board[i][0]=='O')
        {
            dfs(i, 0, vis, board);
        }
    }
    //last col
    for(int i=0; i<n; i++)
    {
        if(!vis[i][m-1] and board[i][m-1]=='O')
        {
            dfs(i, m-1, vis, board);
        }
    }
        
    //replace 'O' by 'X' for rest of the cell
        
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!vis[i][j] and board[i][j]=='O')
            {
                board[i][j]='X';
            }
        }
    }
        
    // as the given function is void so no need to return, we just change original matrix   
        
}

};