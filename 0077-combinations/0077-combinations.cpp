class Solution {
public:
    
    void solve(int idx, int n, int k, vector<vector<int>>&ans, vector<int>&ds)
    {
         if(k==0)
            {
                ans.push_back(ds);
                return;
            }
        if(idx > n)   //as here idx is not index, it is direct value from 1 to n so > sign is used
        {
           
            return;
        }
        
        //take
        ds.push_back(idx);
        solve(idx+1, n, k-1, ans, ds); //jehetu element ta nicchi tai idx+1 and k-1
        ds.pop_back();
        
        //not take
        solve(idx+1, n, k, ans, ds); //jehetu skip kortechi tai idx+1 and k
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        solve(1, n, k, ans, ds);
        
        return ans;
    }
};