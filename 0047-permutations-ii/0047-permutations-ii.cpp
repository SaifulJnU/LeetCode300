class Solution {

    
public:
    void solve(vector<int>&nums, vector<vector<int>>&ans, int idx)
    {
        if(idx>=nums.size())
        {
            ans.push_back(nums);
            return;
        }
        //for finding unique
        unordered_set<int> m;
        
        for(int i= idx; i<nums.size(); i++)
        {  
            if(m.find(nums[i])!=m.end())continue; //for unique permutaion
            m.insert(nums[i]);
    
            swap(nums[i], nums[idx]);
            solve(nums, ans, idx+1);
            swap(nums[i], nums[idx]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>>ans;
        solve(nums, ans, 0);
        
        return ans;
        
    }
};