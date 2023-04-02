public class Solution {
    
    int solve(int ind, int[] nums, int[] dp, int n)
    {
        if(ind>=n-1)return 0;
        if(dp[ind]!=-1)return dp[ind];
        
        int mini = n;  //int.MaxValue dile jame ace overflow asbe
        
        for(int i=ind+1; i<=ind+nums[ind]; i++)
        {
            mini = Math.Min(mini, 1+solve(i, nums, dp, n));
        }
        
        return dp[ind]=mini;
    }
    
    public int Jump(int[] nums) {
        
        int n = nums.Length;
        int[] dp = new int[n];
        
        for(int i=0; i<n; i++)dp[i]=-1;
        
        return solve(0, nums, dp, n);
    }
}