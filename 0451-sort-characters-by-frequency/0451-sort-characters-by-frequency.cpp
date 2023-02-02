class Solution {
public:
    bool static cmp(pair<int,int>a,pair<int,int>b){  //custom comparator
       if(a.second==b.second)
       {
        return a.first<b.first;
       }
       return a.second>b.second;//we can only return this line but for more security we can use 3line
    }
    
    string frequencySort(string s) {
        
	    unordered_map<int,int>cnt;
        for(int x: s)
        {
            cnt[x]++;
        }
        
        vector<pair<int,int>>vp;
        for(auto i=cnt.begin();i!=cnt.end(); i++)
        {
             vp.push_back({i->first,i->second});
        }
        
        sort(vp.begin(), vp.end(), cmp); // decending order sort accourding to key
        //here keys are the count of characters
        
        string ans="";
        for(auto i : vp)
        {
            int j=i.second;  //take the count of character
            
            while(j--)
            {
               ans.push_back(i.first); //push the element to ans
            }
        }
        return ans;
    }
};