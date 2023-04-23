
class Solution {
public:
    void solve(vector<string>&result, int open, int close, int n, string curr)
    {
        //base case
        if(curr.size()==2*n)
        {
            result.push_back(curr);
        }
        else //recursive case
        {
            if(open<n) //1st condition
            {
                solve(result, open+1, close, n, curr+"(");
            }
            if(close<open) //2nd condition
            {
                solve(result, open, close+1, n, curr+")");
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> result;
        solve(result, 0, 0, n, "");
        
        return result;
    }
};