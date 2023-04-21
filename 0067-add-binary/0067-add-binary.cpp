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
                sum += stoi(string(1, a[s1]));
                s1--;
            }
            if(s2>=0)
            {
                sum += stoi(string(1, b[s2]));
                s2--;
            }
            carry = sum/2;
            int r = sum%2;
            string t = to_string(r);
            ans = t + ans;
        }
        return ans;
    }
};
