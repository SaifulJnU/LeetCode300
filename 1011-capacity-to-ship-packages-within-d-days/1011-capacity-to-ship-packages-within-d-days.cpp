class Solution {
    
    
public:
    
    bool isPossible(vector<int>& weights, int days, int mid)
    {
        int currentWeight=0;
        int d=1;
        
        for(int i=0; i<weights.size(); i++)
        {
            if(currentWeight+weights[i]<=mid)
            {
                currentWeight+=weights[i];
            }
            else{
                d++;
                
                if(weights[i]>mid or d > days)
                {
                    return false;
                }
                
                
                currentWeight=weights[i];
            }
        }
        
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        
        int s=0;
        int sum = 0;
        for(int i=0; i<weights.size(); i++)
        {
            sum+=weights[i];
        }
        int e = sum;
        
        int mid;
        int ans;
        while(s<=e)
        {
            mid= s+(e-s)/2;
            if(isPossible(weights, days, mid))
            {
                ans = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        
        return ans;
    }
};