class Solution {
public:
    
    bool isPossible(vector<int>&nums, int mid, int k, int n)
    {
        int currSum=0;
        int numberOfSubArray=1;
        
        for(int i=0; i<n; i++)
        {
            if(currSum+nums[i]<=mid)
            {
               currSum+=nums[i];
            
             }
        else{
            numberOfSubArray++;
            
            if(numberOfSubArray>k or nums[i]>mid)
            {
                return false;
            }
            
            currSum=nums[i];
        }
        }
        
        return true;
    }
    
    //book allocation problem
    int splitArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k>n)return -1;
        
        int s = 0;
        int sum = 0;
        for(int i =0; i<n; i++)
        {
            sum+=nums[i];
        }
        int e = sum;
        int ans;
        int mid;
        while(s<=e)
        {
            mid = s+(e-s)/2;
           // cout<<mid<<" ";
            if(isPossible(nums,mid,k,n))
            {
                ans=mid;
                 e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};