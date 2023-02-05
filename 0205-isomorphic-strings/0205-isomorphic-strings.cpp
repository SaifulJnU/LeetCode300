class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        
        
        for(int i=0; i< s.size(); i++)
        {
            if((mp1.count(s[i])==1 and mp1[s[i]]!=t[i]) or (mp2.count(t[i])==1 and mp2[t[i]]!=s[i]))
            {
                return false;
            }
            
            mp1.insert({s[i],t[i]});
            mp2.insert({t[i],s[i]});

        }
        
        return true;
    }
};