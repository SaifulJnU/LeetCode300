class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ans = -1;
        
        int cnt = 0;
        int j=0;
        
        while(j<nums.size())
        {
           if(nums[j]!=0)
           {
               cnt++;
               j++;
           }
            else
            {
                cnt=0;
                j++;
            }
            ans =  max(ans,cnt);
            
            
        }
        
        return ans;
        
    }
};