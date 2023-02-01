class Solution {
public:
    bool checkRecord(string s) {
        string str="LLL";
        int cnt = 0;
        
        for(int x: s)
        {
           if(x=='A')cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0; i<s.size(); i++)
        { 
            if(s[i]=='L' and s[i+1]=='L' and s[i+2]=='L') return false;
        }
       
        if(cnt>=2)return false;
        else return true;
    }
};