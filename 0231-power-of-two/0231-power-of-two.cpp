class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0)return false;
        
        int cnt = 0;
        while(n!=0)
        {
            n = n&(n-1);
            cnt++;
        }
        
        return cnt==1;
    }
};