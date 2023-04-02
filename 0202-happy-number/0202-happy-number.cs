public class Solution {
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
    
    public bool IsHappy(int n) {
        
        HashSet<int> s = new HashSet<int>();
        int updatedNum = makeDigitSquareNum(n);
        while(updatedNum != 1 && !s.Contains(updatedNum)){
            
            s.Add(updatedNum);
            updatedNum = makeDigitSquareNum(updatedNum);
        }
        
        return updatedNum == 1;
    }
}