class Solution {
public:
    string largestOddNumber(string num) {
        
        for(int i=num.size()-1; i>=0; i--)
        {
            if(num[i] == '1' or num[i] == '3' or num[i] ==  '5' or num[i] == '7' or num[i] == '9')
            {
                return num;
            }
            else num.pop_back();    
        }
        return num;
    }
};