class Solution {
public:
    
    bool dfs(int node, int col, vector<int>& color, vector<vector<int>>& graph)
    {
        color[node] = col;
        
        for(int i = 0; i < graph[node].size(); ++i)
        {
            int neighbor = graph[node][i];
            
            if(color[neighbor] == -1)
            {
                if(dfs(neighbor, !col, color, graph) == false)
                    return false;
            }
            else if(color[neighbor] == col)
            {
                return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<int> color(n, -1);
        
        for(int i = 0; i < n; ++i)
        {
            if(color[i] == -1)
            {
                if(dfs(i, 0, color, graph) == false)
                    return false;
            }
        }
        return true;
    }
};
