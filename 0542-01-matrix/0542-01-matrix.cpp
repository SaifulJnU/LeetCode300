class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> dist(n, vector<int>(m, 0)); 
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        //collect all source here source are all 0
        queue<pair<pair<int, int>, int>>q;
        for(int i=0; i<n; i++)  
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] and mat[i][j] == 0)
                {
                    vis[i][j]=1;
                    q.push({{i,j}, 0});
                }
            }
        }
        
        //apply  bfs for 4 directions
        vector<int> x = {1,-1,0,0};
        vector<int> y = {0,0,1,-1};
        
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            
            dist[row][col]=steps;
            //make 4 call for neighbor
            for(int i=0; i<4; i++)
            {
                int newRow = row+x[i];
                int newCol = col+y[i];
                
                //boundary check
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