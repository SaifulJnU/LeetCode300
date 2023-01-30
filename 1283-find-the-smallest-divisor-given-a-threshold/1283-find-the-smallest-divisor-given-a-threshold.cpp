class Solution {
public:
    //base problem koko banana(binary search)
    bool isPossible(vector<int>& nums, int t, int mid)
    {
        long long sum=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            
            
            sum+=(long long)ceil(nums[i]*1.0/mid);
            
        }
        return sum<=t;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        
        int s=1;
        
        int maxi =-1;
        for(int i=0; i<nums.size(); i++)
        {
            maxi = max(maxi, nums[i]);
        }
        
        int e = maxi;
        int ans;
        int mid;
        while(s<=e)
        {
            mid = s+(e-s)/2;
            
            if(isPossible(nums, threshold, mid))
            {
                ans = mid;
                e=mid-1;
            }
            else 
            {
                s=mid+1;
            }
            
            
        }
        return ans;
    }
};