class Solution {
public:
    void solve(vector<int>&nums, vector<vector<int>>&ans, int idx, vector<int>&ds)
    {
        if(idx == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        //take
        ds.push_back(nums[idx]);
        solve(nums, ans, idx+1, ds);
        ds.pop_back();
        //avoid duplicate
        
        while(idx+1<nums.size() and nums[idx]==nums[idx+1])idx++;
        //not take
        solve(nums, ans, idx+1, ds);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        
        solve(nums, ans, 0, ds);
        
        return ans;
    }
};