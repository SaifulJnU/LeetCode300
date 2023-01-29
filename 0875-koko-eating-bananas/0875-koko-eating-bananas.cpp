class Solution {
public:
    
    long long int ispossible(vector<int>&piles, long long int mid, long long int h)
    {
        long long int time=0;
        for(int i=0; i<piles.size(); i++)
        {
           if(piles[i]%mid==0)
           {
               time+=piles[i]/mid;
           }
            else{
                time+=(piles[i]/mid)+1;
            }
        }
        
        return time<=h;
    }
    
    long long int minEatingSpeed(vector<int>& piles, int h) {
        
        
       int maxi = -1;
       long long int s=1;
        for(int i=0; i<piles.size(); i++)
        {
            maxi = max(maxi, piles[i]);
        }
       long long int e=maxi;
        
       long long int mid;
       long long int ans;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            
            if(ispossible(piles, mid, h))
            {
                ans=mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        
        return ans;
        
    }
};