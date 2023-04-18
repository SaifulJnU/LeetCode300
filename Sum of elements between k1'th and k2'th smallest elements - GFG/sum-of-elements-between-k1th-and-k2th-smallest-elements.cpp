//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    long long k1smallest(long long A[],long long N, long long K1)
    {
        priority_queue<long long>maxHeap;
        
        for(int i=0; i<N; i++)
        {
            maxHeap.push(A[i]);
            if(maxHeap.size()>K1)
            maxHeap.pop();
            
        }
        
        return maxHeap.top();
    }
    long long k2smallest(long long A[],long long N, long long K1)
    {
        priority_queue<long long>maxHeap;
        
        for(int i=0; i<N; i++)
        {
            maxHeap.push(A[i]);
            if(maxHeap.size()>K1)
            maxHeap.pop();
            
        }
        
        return maxHeap.top();
    }
    
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
       long long first=k1smallest(A, N, K1);
       long long second=k1smallest(A, N, K2);
       long long sum = 0;
       for(int i=0; i<N; i++)
       {
           if(A[i]>first and A[i]<second)
           sum+=A[i];
       }
       
       return sum;

    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends