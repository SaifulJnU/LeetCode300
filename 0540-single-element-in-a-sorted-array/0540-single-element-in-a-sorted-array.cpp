class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        //implementation from striver
        int s=0;
        int e=nums.size()-2;
        
        int mid;
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            
            if(nums[mid] == nums[mid^1])  //previous or next element -> equal or not
            {
                s=mid+1;
            }
            else e=mid-1;
        }
        
        return nums[s];
        
    }
};