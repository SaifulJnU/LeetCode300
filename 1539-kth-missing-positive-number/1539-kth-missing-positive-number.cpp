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
            
            if(x>k)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return s+k;
    }
};