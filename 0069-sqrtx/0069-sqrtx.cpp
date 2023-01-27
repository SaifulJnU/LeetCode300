class Solution {
public:
    int mySqrt(int x) {
        
        if(x==0)return 0;
        int s=1;
        int e=x;
        int mid;
        while(e-s>1)
        {
            long long int mid=s+(e-s)/2;
           
            if(mid*mid==(long long)x)return mid;
            else if(mid*mid>(long long)x)
            {
                e=mid;
            }
            else s=mid;
        }
        
        return s; //here mid or s or e will return the same ans
        
    }
};