class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int> cnt;
        unordered_set<int>      unq;
        for (auto x   : arr) cnt[x]++;               
        for (auto& c : cnt) unq.insert(c.second);   
        return cnt.size() == unq.size();
        
    }
};