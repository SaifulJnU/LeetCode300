class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        //we can consider every minutes as a level of bfs tree
        //So the solution wil be with BFS
        
        int n=grid.size();
        int m=grid[0].size();
        
        //vector<vector<int>>vis(n, vector<int>(m , 0));
        int vis[n][m];
        memset(vis, 0, sizeof(vis)); 
        //queue consist {{row, col}, timer}
        queue<pair<pair<int,int>, int>>q;
        
        //Step 1. push the all starting point here it is the index of initially rotten orages
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] ==  2)
                {
                    vis[i][j] = 1;
                    q.push({{i, j} , 0}); //row, col of rotten orage and 0 for initial timer 
                }
            }
        }
        
        //step 2 bfs
        int timer = 0; 
        while(!q.empty())
        {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            
            timer=max(timer, t);
            
            //neighbor finding in matrix and make move according to question
            
            //for move 
            vector<int> x = {1, -1, 0, 0};
            vector<int> y = {0, 0, 1, -1};
            
            for(int i=0; i<4; i++)
            {
                int newRow = x[i] + r;
                int newCol = y[i] + c;
                
                
                //checking the validity of new row and col
                if(newRow>=0 and newRow<n and newCol>=0 and newCol<m  and vis[newRow][newCol]==0 and grid[newRow][newCol]==1)
                {
                    q.push({{newRow, newCol}, timer+1});
                    vis[newRow][newCol]=1;
                }

                
            }
            
        }
        
        //step 3
        //checking all oranges rotten or not
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vis[i][j]==0 and grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        
        return timer;
        
        
    }
};