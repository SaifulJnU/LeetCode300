class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == 0) return 0;
        if (divisor == 1) return dividend;
        
        if (divisor == -1) {
            if (dividend == INT_MIN) return INT_MAX;
            return -dividend;
        }
        
        bool is_negative = false;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            is_negative = true;
        }
        
        long long abs_dividend = abs((long long) dividend);
        long long abs_divisor = abs((long long) divisor);
        
        int result = 0;
        while (abs_dividend >= abs_divisor) {
            long long temp = abs_divisor;
            long long multiple = 1;
            while ((temp << 1) <= abs_dividend) {
                temp += temp;
                multiple += multiple;
            }
            abs_dividend -= temp;
            result += multiple;
        }
        
        return is_negative ? -result : result;
    }
};
