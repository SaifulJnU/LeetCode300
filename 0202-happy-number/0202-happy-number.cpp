class Solution {
public:
    
    int makeDigitSquareNum(int n)
    {
        int num = 0;
        while(n!=0)
        {
            int lastDigit = n%10;
            num += lastDigit*lastDigit;
            n/=10;
        }
        
        return num;
    }
    
    bool isHappy(int n) {
        
        unordered_set<int>s;
        int updatedNum = makeDigitSquareNum(n);
        
        while(updatedNum!=1 and !s.count(updatedNum))
        {
            s.insert(updatedNum);
            updatedNum = makeDigitSquareNum(updatedNum);
        }
        
        return updatedNum == 1;
    }
};