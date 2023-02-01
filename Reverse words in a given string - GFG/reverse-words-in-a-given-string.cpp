//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
    //   string ans="";
    //   stack<string>s;
    //   S+='.';
    //   for(int i=0; i<S.size(); i++)
    //   {
    //       if(S[i]=='.')
    //       {
    //           s.push(ans);
    //           ans.clear();
    //       }
    //       else{
    //           ans+=S[i];
    //       }
    //   }
    
        for(int i=0; i<S.size()-1; i++)
        {
            if(S[i]=='.')S[i]=' ';
        }
    
        stringstream ss(S);
        string word;
        
        stack<string> st;
        while(ss >> word) {
            st.push(word);
        }
        
        string ans = "";
        while(!st.empty()) {
            ans += st.top() + ".";
            st.pop();
        }
        ans.pop_back();
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends