//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
      
      int ans=0, cnt1=0,cntz=0;
      
      for(int i=0; i<str.size(); i++)
      {
          if(str[i]=='0')
          cntz++;
          else cnt1++;
          
          if(cntz==cnt1)
          {
              ans++;
              cntz=0;
              cnt1=0;
          }
      }
      if(cnt1!=cntz)return -1;
      if(ans==0)return -1;
      else return ans;
      
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends