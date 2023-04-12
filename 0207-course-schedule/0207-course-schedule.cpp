class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>adj[numCourses];
        
       for(int i=0; i<prerequisites.size(); i++)
       { 
            int from = prerequisites[i][1];
            int to = prerequisites[i][0];
            adj[from].push_back(to);
       }
            
    
        vector<int> indegree(numCourses, 0);
        for(int i=0; i<numCourses; i++)
        {
            for(auto x: adj[i])
            {
                indegree[x]++;
            }
        }
        
        queue<int>q;
        for(int i=0; i<numCourses; i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        vector<int>topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto x : adj[node])
            {
                indegree[x]--;
                if(indegree[x]==0)
                {
                    q.push(x);
                }
            }
        }
        if(topo.size()==numCourses)return true;
        return false;
        
    }
};