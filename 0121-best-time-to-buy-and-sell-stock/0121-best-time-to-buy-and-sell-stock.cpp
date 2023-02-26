class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProf=0;
        int low=0;
      
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<prices[low])
            {
                low = i;
               // continue;
            }

            maxProf = max(maxProf, prices[i]-prices[low]);
            
        }
        return maxProf;
    }
};