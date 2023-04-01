
    
   


class Solution {
public:
    
     int solve(int ind, int buy, vector<int>& prices, int dp[][2], int n)
    {
        int profit = 0;
        //base case
        if(ind == n)return 0;
        //dp case
        if(dp[ind][buy]!=-1)return dp[ind][buy];
        
        if(buy==1)
        {
            profit = max(-prices[ind]+solve(ind+1, 0, prices, dp, n), 0+solve(ind+1, 1, prices, dp, n));
        }
        else
        {
            profit = max(prices[ind]+solve(ind+1, 1, prices, dp, n), 0+solve(ind+1, 0, prices, dp, n));
        }
        
        return dp[ind][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
         int buy = 1;
        int n = prices.size();
        
        int dp[n][2];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=1; j++)
            {
                dp[i][j]=-1;
            }
        }
        
        return solve(0, buy, prices, dp, n);
    }
};