class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>temp;
        int i=0;
        while(i<s.size())
        {
            string ans="";
            while(i<s.size() and isdigit(s[i]))
            {
                ans+=s[i];
                i++;
            }
            if(!ans.empty()){
                temp.push_back(stoi(ans));
            }
            i++;
        }
        for(int i=1; i<temp.size(); i++)
        {
            if(temp[i-1]>=temp[i])
            {
                return false;
            }
        }
        return true;
    }
};
