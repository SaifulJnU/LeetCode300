class Solution {
public:
    bool hasAlternatingBits(int n) {
        
       int mid = n>>1;
        
        int bit = log2(n)+1;
        int p = n ^ (1LL<<bit)-1;
        
        return p==mid;
    }
};