class Solution {
public:
    bool isAnagram(string s, string t) {
        
//         O(nlogn) solution
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         if(s==t)return true;
//         else return false;
        
        
        //O(n) solution
        if(s.size()!=t.size())return false;
        
        int cnt[26]={0};
        
        for(int i=0; i<s.size(); i++)
        {
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;
        }
        
        for(int x: cnt)
        {
            if(x!=0)return false;
        }
        return true;
        
    }
};