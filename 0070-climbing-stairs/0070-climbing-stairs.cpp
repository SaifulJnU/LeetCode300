class Solution {
public:
    int dp[47];
    int solve(int n)
    {
        if(n<=1) return 1;

        if(dp[n]!=-1)return dp[n];
    
        dp[n]=solve(n-1)+solve(n-2);
     
        return dp[n];
    }
        
    int climbStairs(int n) {
        
         for(int i=0; i<47; i++)
        {
            dp[i]=-1;
        }
        return solve(n);
        
    }
};