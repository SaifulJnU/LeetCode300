class Solution {
public:
    //normal binary search
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
    
    //main code
    int search(vector<int>& nums, int target) {
        
        
        int s=0;
        int e=nums.size()-1;
        int mid;
        int ind;  //min value index ind te store korbo
        if(nums[0]<=nums[e])//jodi kono rotation na thake tahole min value index hobe 0 
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
            else if(nums[0]<=nums[mid]) //jodi left part sorted thake
            {
                s=mid+1;
            }
            else if(nums[mid]<=nums[nums.size()-1]) //jodi right part sorted thake
            {
                e=mid-1;
            }
        }
      // ind store kora index jani mane holo:
      // 0 index theke ind-1 akta sorted array
      // ar ind theke n-1 porjonto akta sorted array
      //akhon 2ta part e normal binary search call kore ans ber korbo
      //binary search korte array, start, end, target lage..ar amader 4tai ache
        
       int x = BS(nums, 0, ind-1, target);
       int y = BS(nums, ind, nums.size()-1, target);
        
       if(x==-1 and y==-1)return -1;
       else if(x==-1)return y;
       else return x;
        
    }
};