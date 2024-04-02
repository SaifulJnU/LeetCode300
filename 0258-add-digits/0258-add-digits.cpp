class Solution {
public:
    int addDigits(int num) {
        
        if(num<=9)return num;
        int givenNumber=num;
        int sum = 0;
        
         while(1){
            while(givenNumber>0)
            {
                int lastDigit = givenNumber%10;
                
                sum += lastDigit;
                
                givenNumber/=10;
            }
             
           if (sum<=9)return sum;
           givenNumber = sum;
           sum = 0;
         }
        return -1;
    
    }
};


