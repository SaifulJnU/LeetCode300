class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int XOR = x^y;
        int cnt=0;
        while(XOR!=0)
        {
            XOR = XOR&(XOR-1);
            cnt++;
        }
        
        return cnt;
    }
};