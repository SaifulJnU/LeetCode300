class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        //step 1 make adjacency list
        vector<int>adj[numCourses];
        
        for(int i=0; i<prerequisites.size(); i++)
        {
            int from = prerequisites[i][1];
            int to = prerequisites[i][0];
            
            adj[from].push_back(to);
        }
        
        //step 2 mark indegree
        
        vector<int>indegree(numCourses, 0);
        for(int i=0; i<numCourses; i++)
        {
            for(auto x: adj[i])
            {
                indegree[x]++;
            }
        }
        
        //step 3 pushing all to initialize queue
        queue<int>q;
        for(int i=0; i<numCourses; i++)
        {
             if(indegree[i]==0){
                    q.push(i);
                }
               
        }
        
        //step 4 bfs
        vector<int>topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto x: adj[node])
            {
                indegree[x]--;
                if(indegree[x]==0)
                {
                    q.push(x);
                }
                
            }
        }
        
        if(topo.size()==numCourses)return topo;
        return {};
    }
};