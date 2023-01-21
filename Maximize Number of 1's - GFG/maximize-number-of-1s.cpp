//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int nums[], int n, int m) {
        // code here
        
        
        int i =  0;
        int j= 0;
        
        int cntzero=0;
        int ans=0;
       
       for(int j=0; j<n; j++) 
       {
            if(nums[j] == 0)
            {
                cntzero++;
            }
        
            
            while(cntzero>m)
            {
                if(nums[i]==0)
                {
                    cntzero--;
                    i++;
                }
                else i++;
            }
            
            ans = max(ans, j-i+1);
            
            
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends