class Solution {
public:
    
    bool solve(int ind, vector<int>&nums, int n, vector<int>&dp)
    {
        if(ind >= n-1)return true; 
        
        //dp case
        if(dp[ind]!=-1)return dp[ind];
        
        int reachable = ind + nums[ind];
        
        for(int i=ind+1; i<=reachable; i++)
        {
            if(solve(i, nums, n, dp))return dp[i] = true;
        }
        
        return dp[ind] = false;
    }
    bool canJump(vector<int>& nums) {
        
        int ind=0;
        int n = nums.size();
        vector<int>dp(n,-1);
        return solve(ind, nums, n, dp);
    }
};