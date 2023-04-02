public class Solution {
 
    public bool IsPowerOfFour(int n) {
       
    if (n <= 0) {
        return false;
    }
    
    while (n >= 64) {
        if (n % 64 != 0) {
            return false;
        }
        n /= 64;
    }
    
    return n == 1 || n == 4 || n == 16 || n == 64;


    }
}
