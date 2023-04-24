class Solution {
public:
    string countAndSay(int n) {
        
        if(n==1)return "1";
        if(n==2)return "11";
        string s = "11";
        for(int i=3; i<=n; i++)
        {
            string temp ="";
            s+="&";
            int cnt = 1;
            
            for(int j=1; j<s.size(); j++)
            {
                if(s[j-1] != s[j])
                {
                    //cout and say mane temp e cout+current val add hobe
                    temp+=to_string(cnt); //adding count
                    temp+=s[j-1]; //adding value
                    
                    cnt=1; //resetting the count
                }
                else cnt++;
            }
            s=temp;
        }
        return s;
        
    }
};