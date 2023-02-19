//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    
    int prec( char c)
    {
        if(c=='+' or c=='-')
        {
            return 1;
        }
        else if(c=='*' or c=='/')
        {
            return 2;
        }
        else if(c=='^')
        {
            return 3;
        }
        else{
            return -1;
        }
    }
    
    string infixToPostfix(string s) {
        
        stack<char>st;
        string res="";
        
        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                res+=s[i];
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                while(!st.empty() and st.top()!='(')
                {
                    res+=st.top();
                    st.pop();
                }
                if(!st.empty())
                st.pop();
            }
            else
            {
                
                while(!st.empty() and prec(s[i])<=prec(st.top()))
                {
                    res+=st.top();
                    st.pop();
                    
                }
                st.push(s[i]);
            }
            
            
            
        }
        while(!st.empty())
            {
                res+=st.top();
                st.pop();
            }
        
        return res;
         
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends