class Solution {
public:
    
    
    int first(vector<int>& nums, int t)
    {
        int ind1=-1;
        
        int s=0;
        int e=nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid]==t)
            {
               ind1 = mid;
                e=mid-1;
                
            }
            else if(nums[mid]>t)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
            mid = s+(e-s)/2;
        }
        
        
        
        return ind1;
    }
    
    
    int last(vector<int>& nums, int t)
    {
        int ind1=-1;
        
        int s=0;
        int e=nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid]==t)
            {
                ind1 = mid;
                s=mid+1;
               
            }
            else if(nums[mid]>t)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
            mid = s+(e-s)/2;
        }
        
        
        
        return ind1;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>v;
        
        int x = first(nums, target);
        int y = last(nums, target);
        
        v.push_back(x);
        v.push_back(y);
        
        return v;
    }
};