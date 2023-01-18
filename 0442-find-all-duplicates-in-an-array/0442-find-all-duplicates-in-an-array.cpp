class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        
        unordered_map<int, int>mp;
        
        for(auto x : nums)
        {
            mp[x]++;
        }
        
        for(auto m : mp)
        {
            if(m.second==2)
            {
               ans.emplace_back(m.first);
            }
        }
        
        return ans;
    }
};