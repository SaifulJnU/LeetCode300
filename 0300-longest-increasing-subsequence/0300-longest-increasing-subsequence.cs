public class Solution {
    
    int LIS(int ind, int prev_ind, int[] nums, int[,] dp, int n)
    {
        //base case
        if(ind == n) return 0;
        
        //dp case
        if(dp[ind, prev_ind+1] != -1) return dp[ind, prev_ind+1];
        
        //notTake;
        int lenByNotTaking = 0 + LIS(ind+1, prev_ind, nums, dp, n);
        //taking
        int lenByTaking = 0;
        if(prev_ind==-1 || nums[ind]>nums[prev_ind])
             lenByTaking = 1 + LIS(ind+1, ind, nums, dp, n);
        
        int maxLen = Math.Max(lenByTaking, lenByNotTaking);
        
        return dp[ind, prev_ind+1] = maxLen;
    }
    
    public int LengthOfLIS(int[] nums) {
        
        int n = nums.Length;
        
        int[,] dp = new int[n, n+1];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                dp[i, j] = -1;
            }
        }
        
        int ind = 0;
        int prev_ind = -1;
        
        return LIS(ind, prev_ind, nums, dp, n);
    }
}
