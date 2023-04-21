class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0;
        int right = 0;    
        int len = 0;
        int n = s.size();
        vector<int> mapp(256, -1);
        
        while(right<n)
        {
            if(mapp[s[right]] != -1) left = max(mapp[s[right]]+1,left);
            
            mapp[s[right]] = right;
            
            len = max(len, right-left+1);
            
            right++;
        }
        return len;
    }
};