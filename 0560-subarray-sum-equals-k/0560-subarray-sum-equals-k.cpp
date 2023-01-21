class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        int maxi = INT_MIN;
        int Csum = 0;
        int n = nums.size();
        int cnt = 0;
        
        unordered_map<int,int>mp;
        
        for(int i=0; i<n; i++)
        {
            Csum+=nums[i];
            
        
            
            if(Csum == k)
            {
                cnt++;
            }
            
            if(mp.find(Csum - k)!=mp.end())
            {
                cnt+=mp[Csum - k]; // mp[Csum - k] means ei value er jonno map e joto count ache
            }
                
            mp[Csum]++;
            
           
        }
        return cnt;
    }
};