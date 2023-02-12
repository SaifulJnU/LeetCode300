class Solution {
public:
    void solve(vector<int>&nums, int idx, int n, vector<vector<int>>&ans)
    {
        if(n==idx)
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=idx; i<n; i++)
        {   
            swap(nums[idx], nums[i]);
            solve(nums, idx+1, n, ans); //recursive call
            swap(nums[idx], nums[i]); //backtrack to have the prev state
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
         
        vector<vector<int>>ans;
        int n=nums.size();
        
        solve(nums, 0, n, ans);
            
        return ans;
    }
};