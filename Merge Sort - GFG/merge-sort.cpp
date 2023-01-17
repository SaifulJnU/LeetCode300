//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        int start = l;
         int end = r;
         int mid = m;
         // 3 pointer needed i,j and k
        int i = start;   // left part's 1st index
        int j = mid + 1; // right part's 1st index
        int k = start;   // this pointer for storage array

        // storage array
        //int storageSize = end - start + 1;
        int brr[100006];

        // for merging two sorted array
        while (i <= mid and j <= end)
        {
                if (arr[i] < arr[j])
                {
                        brr[k] = arr[i];
                        k++;
                        i++;
                }
                else
                {
                        brr[k] = arr[j];
                        k++;
                        j++;
                }
               
        }
         while (i <= mid)
                {
                        brr[k] = arr[i];
                        k++;
                        i++;
                }
                while (j <= end)
                {
                        brr[k] = arr[j];
                        k++;
                        j++;
                }
      

        // copying the element to original array arr from brr
        for (int i = start; i <= end; i++)
        {
                arr[i] = brr[i];
        }
    
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        //base case
         int start = l;
         int end = r;
        if (start >= end)
                return;

        // for dividing the array
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        // for conquering the array
        merge(arr, start, mid, end);
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends