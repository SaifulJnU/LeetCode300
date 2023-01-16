class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());
        
        vector<int>v;
        int maxi = 0;
        for(auto interval : intervals)
        {
            if(ans.size() == 0)
            {
                ans.push_back(interval);
            }
            else
            {
                vector<int>& previousInterval = ans[ans.size()-1];
                
                if(interval[0] <= previousInterval[1])
                {
                     previousInterval[1] = max(previousInterval[1],interval[1]);
                }
                else
                {
                    ans.push_back(interval);
                }
            }
        }
        return ans;
        
        
    }
};