class Solution {
public:
    
     struct cmp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
            if(a.first==b.first){
                return b.second>a.second;
            }
            else{
                return a.first>b.first;
            }
        }
    };
   
    
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n; i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp>pq;
        
        
        for(auto x: mp)
        {
            pq.push({x.second,x.first});
        }
        
        vector<int>ans;
        while( not pq.empty())
        {
            int freq = pq.top().first;
            int val = pq.top().second;
            
            while(freq--)
            {
                ans.push_back(val);
            }
            pq.pop();
        }
      
        
        
        return ans;
    }
};