class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int s1 = a.size()-1;
        int s2 = b.size()-1;
        int carry = 0;
        while(s1>=0 or s2>=0 or carry)
        {
            int sum = carry;
            if(s1>=0)
            {
                sum += a[s1] - '0';  //char to integer
                s1--;
            }
            if(s2>=0)
            {
                sum += b[s2] - '0';
                s2--;
            }
            carry = sum/2;
            int r = sum%2;
            char t = r + '0';  //integer to char
            ans = t + ans;
        }
        return ans;
    }
};
