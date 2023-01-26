class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 0;
        if(nums.size()==2){
            if(nums[0]>nums[1])return 0;
            else return 1;
        }
        
        int s=1;
        int e=nums.size()-2;
        int mid;
           
           //corner case
               //left corner
               if(nums[0]>nums[1])
               {
                   return 0;
               }
               
               //right corner
               if(nums[nums.size()-1]>nums[nums.size()-2])
               {
                   return nums.size()-1;
               }
               
           
        
        while(s<=e)
        { 
               mid = s+(e-s)/2;
          
               //mid condition
               if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
               {
                   return mid;
               } //left and right condition
               else if(nums[mid]<nums[mid+1])
               {
                   s = mid+1;
                  
               }
               else  e = mid-1;
           }
           
        return -1;
        
    }
};