class Solution {
public:
    
    void solve(int idx, int n, int k, vector<vector<int>>&ans, vector<int>&ds)
    {
        if(idx > n)   //as here idx is not index, it is direct value from 1 to n so > sign is used
        {
            if(k==0)
            {
                ans.push_back(ds);
                return;
            }
            return;
        }
        
        //take
        ds.push_back(idx);
        solve(idx+1, n, k-1, ans, ds);
        ds.pop_back();
        
        //not take
        solve(idx+1, n, k, ans, ds);
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        solve(1, n, k, ans, ds);
        
        return ans;
    }
};