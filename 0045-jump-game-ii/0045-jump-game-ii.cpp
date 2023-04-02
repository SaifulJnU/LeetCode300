class Solution {
public:
    int getMinJump(int i, vector<int> &nums, vector<int> &dp){
        if(i>=nums.size()-1) return 0;
        if(dp[i]!=-1) return dp[i];
        
        int minJump=nums.size();
        
        for(int index=i+1; index<=i+nums[i]; index++){
            minJump=min(minJump, 1+getMinJump(index, nums, dp));
        }
        return dp[i]=minJump;
    }
    
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return getMinJump(0, nums, dp);
    }
};