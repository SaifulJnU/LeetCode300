class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> ans;
        
        //two pointer approach
        int low = 0;
        int high = arr.size()-1;
        while(high - low >= k)
        {
            if(abs(arr[low]-x)> abs(arr[high]-x))
                low++;
            else high--;
        }
        for(int i=low; i<=high; i++)
        {
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};