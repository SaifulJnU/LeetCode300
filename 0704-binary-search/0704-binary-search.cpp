class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int ans=-1;
        
        int s=0;
        int e=nums.size()-1;
        
        int mid = s+(e-s)/2;
        
        while(s<=e)
        {
            if(nums[mid] == target)
            {
                ans = mid;
                return ans;
            }
            else if(target<nums[mid])
            {
                e = mid-1;
            }
            else s = mid+1;
            
            mid = s+(e-s)/2;
        }
        
        return ans;
    }
};