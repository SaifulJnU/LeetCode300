class Solution {
public:
    void solve(int k, int n, vector<vector<int>>&ans, vector<int>ds, int idx)
    {
        if(k==0)
        {
            if(n==0)
            {
                ans.push_back(ds);
                return;
            }
            
            return ;
        }
         if(idx>9)return;
        
        //take
        ds.push_back(idx);
        solve(k-1,n-idx,ans, ds, idx+1);
        ds.pop_back();
        //not take
        solve(k,n,ans, ds, idx+1);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        
        vector<int>ds;
        vector<vector<int>>ans;
        
        solve(k, n, ans, ds, 1);
        
        return ans;
    }
};