//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    
  public:
  
    bool isPossible(int n, vector<int>&piles, int h, int mid)
    {
        long long int time = 0;
        for(int i=0; i<n; i++)
        {
            time+=(long long int)ceil(piles[i]*1.0/mid);
        }
        return time<=h;
    }
    int Solve(int N, vector<int>& piles, int H) {
        
        long long int s=1;
        long long int e;
        int maxi = -1;
        
        for(int i=0; i<N; i++)
        {
            maxi = max(maxi, piles[i]);
        }
        
        e= maxi;
        int mid;
        int ans;
        while(s<=e)
        {
            mid = s+(e-s)/2;
            if(isPossible(N, piles, H, mid))
            {
                ans = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends