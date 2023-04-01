public class Solution {
    
    int solve(int ind, int buy, int[] prices, int[,] dp, int n, int fee)
    {
        int profit = 0;
        //base case
        if(ind == n)return 0;
        //dp case
        if(dp[ind, buy]!=-1)return dp[ind, buy];
        
        if(buy==1)
        {
            profit = Math.Max(-prices[ind]-fee+solve(ind+1, 0, prices, dp, n, fee), 0+solve(ind+1, 1, prices, dp, n, fee));
        }
        else
        {
            profit = Math.Max(prices[ind]+solve(ind+1, 1, prices, dp, n, fee), 0+solve(ind+1, 0, prices, dp, n, fee));
        }
        
        return dp[ind,buy] = profit;
    }
    
    public int MaxProfit(int[] prices, int fee) {
        
        int buy = 1;
        int n = prices.Length;
        
        int[,] dp = new int[n, 2];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=1; j++)
            {
                dp[i,j]=-1;
            }
        }
        
        return solve(0, buy, prices, dp, n, fee);
        
    }
}