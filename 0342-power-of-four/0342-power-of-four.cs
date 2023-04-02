public class Solution {
    
    bool solve(long ans, long n)
    {
        if(ans==n) {
            return true;
        }
        if(ans>n) {
            return false;
        }
        
        bool ok = solve(ans*4, n);
        
        return ok;
    }
    
    public bool IsPowerOfFour(int n) {
        if(n<=0 || n == int.MaxValue) {
            return false;
        }
        return solve(1, n);
    }
}
