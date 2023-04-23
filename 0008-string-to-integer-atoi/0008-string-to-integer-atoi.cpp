class Solution {
public:
    int myAtoi(string s) {
        
        
        int MIN = INT_MIN;
        int MAX = INT_MAX;
        int i=0;
        int len = s.size();
        if(len == 0) return 0;
        
        while(i<len)
        {
            if(s[i]==' ')
                i++;
            else break;
        }
        
        s = s.substr(i);
        i=0;
        int sign = 1;
        long long sum = 0;
        if(s[0]=='-'){
            sign = -1;
            i++;
        }
        
        if(s[0]=='+'){
            sign = 1;
          i++;   
        }
        
        while(i<len)
        {
            if(!isdigit(s[i]))break;
            
            sum = sum*10+s[i]-'0';
            if(sign==1 and sign*sum>INT_MAX) return MAX;
            if(sign==-1 and sign*sum<MIN) return MIN;
            
            i++;
        }
      
        
        return (int)sign*sum;
    }
};