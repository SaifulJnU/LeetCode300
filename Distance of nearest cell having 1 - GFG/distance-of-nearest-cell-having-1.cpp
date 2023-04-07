//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n = grid.size();
	    int m = grid[0].size();
	    
	    vector<vector<int>> vis(n, vector<int>(m, 0));
	    vector<vector<int>> dist(n, vector<int>(m, 0));
	    
	    queue<pair<pair<int,int>, int>> q;
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<m; j++)
	        {
	            if(!vis[i][j] and grid[i][j]==1)
	            {
	                vis[i][j]=1;
	                q.push({{i,j}, 0});
	            }
	        }
	    }
	    
	    vector<int> x = {1, -1, 0, 0};
	    vector<int> y = {0, 0, 1, -1};
	    
	    while(!q.empty())
	    {
	        int row = q.front().first.first;
	        int col = q.front().first.second;
	        int steps = q.front().second;
	        
	        q.pop();
	        
	        dist[row][col] = steps;
	        
	        for(int i=0; i<4; i++)
	        {
	            int newRow = row + x[i];
	            int newCol = col + y[i];
	            
	            if(newRow>=0 and newRow<n and newCol>=0 and newCol<m and vis[newRow][newCol]==0)
	            {
	                vis[newRow][newCol]=1;
	                q.push({{newRow, newCol}, steps+1});
	            }
	        }
	    }
	    return dist;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends