class Solution {
private:
    vector<int> x = {+1, -1, 0, 0};
    vector<int> y = {0, 0, +1, -1};
    
    void dfs(int i, int j, vector<vector<bool>> &visited, vector<vector<char>>& grid){
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && !visited[i][j] && grid[i][j] == '1'){
            visited[i][j] = true;
            
            for(int k=0; k<4; k++){
                int newX = i+x[k];
                int newY = j+y[k];
                
                dfs(newX, newY, visited, grid);
            }
        }
    }
    
    bool isValid(int i, int j, vector<vector<bool>> &visited, vector<vector<char>>& grid){
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && !visited[i][j] && grid[i][j] == '1') return true;
        else
            return false;
    }
    
    void bfs(int i, int j, vector<vector<bool>> &visited, vector<vector<char>>& grid){
        queue<pair<int, int>> q1;
        q1.push({i, j});
        visited[i][j] = true;
        
        while(!q1.empty()){
            pair<int, int> front = q1.front();
            q1.pop();
            
            for(int k=0; k<4; k++){
                int newX = front.first+x[k];
                int newY = front.second+y[k];
                
                if(isValid(newX, newY, visited, grid)){
                    q1.push({newX, newY});
                    visited[newX][newY] = true;
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(), n=grid[0].size();
        
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int count = 0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(i, j, visited, grid);
                }
            }
        }
        
        return count;
    }
};