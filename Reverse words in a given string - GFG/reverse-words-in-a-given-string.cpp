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
       string ans="";
       stack<string>s;
       S+='.';
       for(int i=0; i<S.size(); i++)
       {
           if(S[i]=='.')
           {
               s.push(ans);
               ans.clear();
           }
           else{
               ans+=S[i];
           }
       }
       
       //cout<<s.size()<<endl;
        string f;
        int i=0;
        int n=s.size();
        while(!s.empty())
       {
           ++i;
          f+=s.top();
          //cout<<s.top()<<" ";
          if(i!=n)
          {
              f+='.';
          }
          
          s.pop();
       }
       return f;
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