class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>>st;
        for(int i=0; i<s.size(); i++)
        {
            if(st.size()==0 or st.back().first!=s[i])
            {
                st.push_back({s[i],1});
            }
            else
            {
                st.back().second++;
            }
            
            if(st.back().second==k)
            {
                st.pop_back();
            }
        }
        string ans="";
        for(auto x : st)
        {
            ans.append(x.second, x.first);
        }
        return ans;
    }
};