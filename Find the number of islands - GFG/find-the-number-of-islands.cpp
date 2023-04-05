//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    private:
    vector<int> x = {1, -1, 0, 0, -1, 1, 1, -1 };
    vector<int> y = {0, 0, 1, -1, 1, -1, 1, -1};
    
    void dfs(int row, int col, vector<vector<char>>&grid, vector<vector<int>>&vis)
    {
        //boundary check
        if( row>=0 and row<grid.size() and col>=0 and col<grid[0].size() and !vis[row][col] and grid[row][col]=='1')
        {
            vis[row][col]=1;
            
            for(int i=0; i<8; i++)
            {
                int newRow = x[i]+row;
                int newCol = y[i]+col;
                
                dfs(newRow, newCol, grid, vis);
            }
        }
        
        
    }
    
    
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m, 0));
        int cnt = 0;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] and grid[i][j]=='1')
                {
                    cnt++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends