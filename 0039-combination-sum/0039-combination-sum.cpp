class Solution {
public:
    
    void solve( vector<int>&candidates, int target, vector<vector<int>>&ans, vector<int>&ds, int idx)
    {
        if(idx==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
                return;
            }
            
            return;
        }
        
        //take
        if(candidates[idx]<=target) //this statement is most important
        {
            
        ds.push_back(candidates[idx]);
        solve(candidates, target-candidates[idx], ans, ds, idx);
        ds.pop_back();
       
        }
      
        //not take
        solve(candidates, target, ans, ds, idx+1);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        
        
        vector<vector<int>>ans;
        
        vector<int>ds;
        
        
        solve(candidates, target, ans, ds, 0);
        
        return ans;
    }
};