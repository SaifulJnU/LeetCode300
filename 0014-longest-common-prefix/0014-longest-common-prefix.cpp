class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        
        
        string res="";
        
        sort(str.begin(), str.end());
        
        string minLenStr=str[0];
        string otherStr=str[str.size()-1];
        
        
        for(int i=0; i<minLenStr.size(); i++)
        {
           if(minLenStr[i]==otherStr[i])
           {
             res+=minLenStr[i];
           }
            else break;
        }
        
       return res;
    }
};