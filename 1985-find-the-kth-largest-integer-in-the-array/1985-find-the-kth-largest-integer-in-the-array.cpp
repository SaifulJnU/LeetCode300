class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        
         //as question ask for largest element so we need to make minHeap
        priority_queue<pair<int, string>, vector<pair<int,string>>, greater<pair<int,string>>> minHeap;
        
        for(auto x : nums)
        {
            minHeap.push({x.size(), x});
        }
        
       while(!minHeap.empty())
        {
            
            if(minHeap.size()==k)
            {   
                
               break;
            }
            minHeap.pop();
        }
        
        
        return minHeap.top().second;
    }
};