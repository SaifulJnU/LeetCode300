//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int>s, int n, int k, int mid)
    {
        int cnt=1;  //beacare full about cnt = 1;
        int lastCow=s[0];
        
        for(int i=1; i<n; i++)
        {
            if(abs(s[i]-lastCow)>=mid)
            {
                cnt++;
                lastCow = s[i];
            }
            
            if(cnt==k)return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
    
      if(k>n)return -1;
        // Write your code here
      
      sort(stalls.begin(), stalls.end()); 
      int s = 1;
      int e = stalls[n-1]-1;
      int mid;
      int ans;
      while(s<=e)
      {
          mid = s+(e-s)/2;
         // cout<<mid<<" "<<endl;
          if(isPossible(stalls,n,k,mid))
          {
              ans=mid;
              s=mid+1;
              
          }
          else{
              e=mid-1;
          }
      }
      
      return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends