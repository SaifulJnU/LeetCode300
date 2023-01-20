class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
     int slow = 1;
        int fast = 1;
        int n = nums.size();
        while(fast<n)
        {
            if(nums[fast-1] != nums[fast])
            {
                nums[slow++] = nums[fast];
            }
            
            fast++;
        }
     return slow;
    }
};