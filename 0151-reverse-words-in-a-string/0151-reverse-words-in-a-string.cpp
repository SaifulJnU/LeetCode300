class Solution {
public:
    string reverseWords(string s) {
        string word;
        stack<string>st;
        
        stringstream ss (s);  //to break the the sentance while it one or more space and ignore
        
        while(ss >> word)
        {
           st.push(word);
        }
        
        string ans="";
        while(!st.empty())
        {
            ans+=st.top()+" ";
            st.pop();
        }
        ans.pop_back();
        
        return ans;
    }
};