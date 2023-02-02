class Solution {
public:
    
      bool static cmp(pair<int,int>a,pair<int,int>b){

    if(a.second==b.second){

        return a.first<b.first;

    }

    return a.second>b.second;

}
    string frequencySort(string s) {
        
      



	     map<int,int>cnt;
        for(int x: s)
        {
            cnt[x]++;
        }
        
        vector<pair<int,int>>vp;
        for(auto i=cnt.begin();i!=cnt.end(); i++)
        {
             vp.push_back({i->first,i->second});
     
        }
        
        sort(vp.begin(), vp.end(), cmp);
      
        string vec;
        for(auto i: vp)
        {
            int j=i.second;
            
            while(j--)
            {
               
               vec.push_back(i.first);
            }
        }
       // for(int i=0;i < vec.size(); i++)
       // cout<<vec[i];
       // cout<<endl;
     
        return vec;
    }
};