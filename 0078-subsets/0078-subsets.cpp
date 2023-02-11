class Solution {
public:
    vector<vector<int>>ans;
    void powerOfSet( vector<int>&ds,vector<int>&nums, int idx, int n)
    {
        //base case
        if(idx == n)
        {
            ans.push_back(ds);
            return;
        }
        
        
        //take
        ds.push_back(nums[idx]);
        powerOfSet(ds, nums, idx+1, n);
        ds.pop_back();
        //not take
        powerOfSet(ds, nums, idx+1, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        
        int n=nums.size();
        vector<int>ds;
        powerOfSet(ds,nums, 0, n);
        
        return ans;
    }
};