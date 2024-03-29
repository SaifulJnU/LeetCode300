class Solution {
public:
    void solve( string digits, vector<string>&ans, string smap[], int idx, string &ds)
    {
        if(digits=="")  //corner case
            return;
        
        if(idx == digits.size()) //if it will reach the leaf of the recursive tree
        {   
            ans.push_back(ds);
            return;
        }
        
        int d = digits[idx] - '0';  //extract a single digit from the given string
        
        string s = smap[d];  //extract conrrespoding string that mapped to this digit
        
        for(int i=0; i<s.size(); i++)  //for every sigle character
        {
            ds.push_back(s[i]);
            solve(digits, ans, smap, idx+1, ds);
            ds.pop_back();

        }
        
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        
        vector<string>ans;
        
        string ds;
        
        string smap[10] = { //mapping all digits to its containing character
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        
        solve(digits, ans, smap, 0, ds);
        return ans;
        
    }
};