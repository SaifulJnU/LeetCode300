

class Solution {
public:
    double myPow(double x, int n) {
        
        
        if(n==0) return 1;
        if(x==1) return 1;
        
        double ans = myPow(x, n/2);
        
        if(n%2==0)
        {
            return ans*ans;
        }
        
        else{
            
            if(n<0)return ans*ans*(1/x);
            
            return x*ans*ans;
        }
        
    }
};