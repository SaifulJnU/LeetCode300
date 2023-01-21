//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
       // int occer = size/2;
        
        sort(a, a+size);
        
        int cnt = 0;
        
        int ans=a[size/2]; //ata holo repeated element er 1st value...mane je value repeating hocche 
        //take a[size/2]  diye ber kore fellam 
        
        //ans question wise ei value ta size/2 er beshi bar thakte hobe...tai loop diye check korlam
        
       //unique element o thakte pare tai ei for loop and condition
       //unique na thakle sorting korar kor return a[size/2] e holo ans
        for(int i=0; i<size; i++)
        {
            if(ans==a[i])
            {
                cnt++;
            }
        }
        if(cnt>size/2)  //eikhane size/2 holei ans hobe na borong cnt>size/2 hotei hobe
        {
            return ans;
        }
        else return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends