//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int ans=-1;
        
        int s=0;
        int e=n-2;
        
        int mid;
        
        while(s<=e)
        {
            mid = s+(e-s)/2;
            
            if(arr[mid] == arr[mid^1])
            {
                s=mid+1;
            }
            else e=mid-1;
            
        }
        
       return arr[s];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends