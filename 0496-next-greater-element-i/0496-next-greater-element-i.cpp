class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
         stack<int>st;
         unordered_map<int, int> umap;
        
         for(int i = nums2.size()-1; i>=0; i--)
         {
             if(st.empty())
             {
                 umap.insert({nums2[i],-1});
             }
             else if(!st.empty() and st.top()>nums2[i])
             {
                 umap.insert({nums2[i], st.top()});
             }
             else if(!st.empty() and st.top()<=nums2[i])
             {
                 while(!st.empty() and st.top()<=nums2[i])
                 {
                     st.pop();
                 }
                 
                 if(st.empty())
                 {
                     umap.insert({nums2[i],-1});
                 }
                 else
                 {
                     umap.insert({nums2[i], st.top()});
                 }
             }
            st.push(nums2[i]);
         }
        
        vector<int>ans;
        for(auto x : nums1)
        {
            ans.push_back(umap[x]);  
        }
        
        return ans;
    }
};