//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
       long long int s=0;
       long long int e=n-1;
       
       long long int mid = mid = s+(e-s)/2;
       int floor = -1;
       
       while(s<=e)
       {
          
           if(v[mid]==x)
           {
               return mid;
           }
           else if(v[mid]>x)
           {
               e=mid-1;
           }
           else
           {
               floor=mid;
               s=mid+1;
           } 
           mid = s+(e-s)/2;
       }
       
       return floor;
       
       
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends