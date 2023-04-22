class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;
        if(n==0) return "";
        
        int maxLen = 1;
        int st = 0, ed = 0;
        
        // odd length
        for(int i=0; i<n-1; i++)
        {
            int left = i, right = i;
            
            while(left>=0 and right<n and s[left]==s[right])
            {
                left--;
                right++;
            }
            
            int len = right-left-1;
            if(len>maxLen)
            {
                maxLen = len;
                st = left+1;
                ed = right-1;
            }
        }
        
        // even length
        for(int i=0; i<n-1; i++)
        {
            int left = i, right = i+1;
            
            while(left>=0 and right<n and s[left]==s[right])
            {
                left--;
                right++;
            }
            
            int len = right-left-1;
            if(len>maxLen)
            {
                maxLen = len;
                st = left+1;
                ed = right-1;
            }
        }
        
        return s.substr(st, maxLen);
    }
};
