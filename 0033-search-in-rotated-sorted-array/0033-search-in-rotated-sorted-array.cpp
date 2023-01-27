class Solution {
public:
    
    int BS(vector<int>&nums, int s, int e, int t)
    {
        
        int mid;
        int ans=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==t){
              ans = mid;  
                break;
            } 
            else if(nums[mid]>t)
            {
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
    
    int search(vector<int>& nums, int target) {
        
        
        int s=0;
        int e=nums.size()-1;
        int mid;
         int ind;
        if(nums[0]<=nums[e])
        {
             ind = 0;
        }
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            
            int next=(mid+1)%nums.size();
            int prev=(mid+nums.size()-1)%nums.size();
            
            if(nums[mid]<=nums[prev] and nums[mid]<=nums[next])
            {
                ind = mid;
                break;
            }
            else if(nums[0]<=nums[mid])
            {
                s=mid+1;
            }
            else if(nums[mid]<=nums[nums.size()-1])
            {
                e=mid-1;
            }
        }
        
       int x = BS(nums, 0, ind-1, target);
       int y = BS(nums, ind, nums.size()-1, target);
        
       if(x==-1 and y==-1)return -1;
        else if(x==-1)return y;
        else return x;
        
    }
};