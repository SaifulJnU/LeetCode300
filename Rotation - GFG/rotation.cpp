//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
              
              int s=0;
              int e=n-1;
              int mid;
              if(n==1)return 0;
             // if(arr[0]<arr[1])return 0;
             // if(arr[n-1]<arr[n-2])return 0;
                if(arr[s]<=arr[e]){
                return 0;
                }
              
              while(s<=e)
              {
                  mid = s+(e-s)/2;
                  
                  int prev = (mid+n-1)%n;
                  int next = (mid+1)%n;
                  if(arr[mid]<=arr[next] and arr[mid]<=arr[prev])
                  {
                      return mid%n;
                  }
                   else if(arr[s]<=arr[mid] && arr[mid]<=arr[e]){
                   e=mid-1;
                  }
                  else{
                      if(arr[s]<=arr[mid])
                  {
                      s=mid+1;
                     
                  }
                  else if(arr[mid]<=arr[e])
                  {
                       e=mid-1;
                  }
                  }
                  
              }
             
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends