//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	double multiply(int mid, int n)
	{
	    double ans=1;
	    for(int i=1; i<=n; i++)
	    {
	        ans*=mid;
	    }
	    
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	    int s=1;
	    int e=m;
	   
	    while(s<=e)
	    {
	        int mid= s+(e-s)/2;
	     
	        if(multiply(mid,n)==m)return mid;
	        
	        else if(multiply(mid,n)>m)
	        {
	            e=mid-1;
	            
	        }
	        else s=mid+1;
	        
	       
	    }
	    
	    return -1;
	  
	    
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends