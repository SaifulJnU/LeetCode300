class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        //idea is: a+b+c=0 so b+c=-a 
        vector<vector<int>>ans;
        
        sort(nums.begin(), nums.end()); //to apply two pointer approach
        
        for(int i=0; i<nums.size(); i++)
        {
            int a = nums[i];
            int target=-a;  //target, beacause a+b+c=0 then b+c=-a so target can be -a (t = -a)
            
            int s=i+1;
            int e=nums.size()-1;
            
            while(s<e)
            {
                if(nums[s]+nums[e]==target)
                {
                    ans.push_back({nums[i], nums[s], nums[e]});
                    
                    while(s<e and nums[s]==nums[s+1])s++; //to skip duplicates
                    while(s<e and nums[e]==nums[e-1])e--; //to skip duplicate
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>target)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
            
            while(i+1<nums.size() and nums[i]==nums[i+1])i++; //to skip duplicates
        }
        
        return ans;
        
    }
};