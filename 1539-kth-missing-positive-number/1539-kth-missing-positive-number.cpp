class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       
       int s=0;
        int e=arr.size()-1;
        
        int mid;
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            
            int x= arr[mid]-mid; //it gives me kotota element missing ache
            
            if(x<=k)
            {
                s=mid+1; //missing number kom hole barate hobe
            }
            else{
                e=mid-1; //missing number beshi hole komate hobe
            }
        }
        return s+k;
    }
};