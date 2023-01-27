class Solution {
public:
    int findMin(vector<int>& nums) {
        
              vector<int>arr=nums;
              int n = nums.size();
               int s=0;
              int e=n-1;
              int mid;
              if(n==1)return arr[0];
             
                if(arr[e]>=arr[0]){
                return arr[0];
                }
              
              while(s<=e)
              {
                  mid = s+(e-s)/2;
                  
                  int prev = (mid+n-1)%n;
                  int next = (mid+1)%n;
                  if(arr[mid]<=arr[prev])
                  {
                      return arr[mid];
                  }
                  // else if(arr[s]<=arr[mid] && arr[mid]<=arr[e]){
                  // e=mid-1;
                 // }
                //  else{
                  else if(arr[0]<=arr[mid])
                  {
                      s=mid+1;
                     
                  }
                  else 
                  {
                       e=mid-1;
                  }
                //  }
                  
              }
        if(arr[0]>=arr[1])return arr[1];
        else return arr[1];
             
    }
};