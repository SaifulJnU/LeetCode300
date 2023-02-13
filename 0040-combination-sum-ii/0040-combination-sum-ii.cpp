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
        solve(candidates, target-candidates[idx], ans, ds, idx+1);
        ds.pop_back();
       
        }
         while(idx+1 < candidates.size() and candidates[idx] == candidates[idx+1])idx++; //skip duplicate
      
        solve(candidates, target, ans, ds, idx+1);
 
    }
   

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        solve(candidates, target, ans, ds, 0);
        
        return ans;
    }
};