class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
            }
            else
            {
                mp.insert({nums[i], i});
            }
        }
        
        return v;
        
    }
};