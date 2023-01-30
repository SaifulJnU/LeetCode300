class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       
        //as array sorted and no duplicate are there
        for( auto x : arr)
        {
            if(x<=k)k++; //mane koto dure anche 
        }
        return k;
    }
};