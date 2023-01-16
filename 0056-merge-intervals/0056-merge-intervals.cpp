class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>ans;  ///2d array return korte hobe tai ans niya nilam
        
        sort(intervals.begin(), intervals.end());  ///by default 2d array sort korte 1st index ba bolte pari strat time wise                                                    ///sort hoy
        
        vector<int>v;
        
        for(auto interval : intervals)   //2d array traverse kortachi proti bar akta kore array dicche
                                         // mane jodi main 2d array
                                         /* intvarls = [[1,3],
                                                         [2,6],
                                                        [8,10],
                                                        [15,18]]
                                            tahole protibar interval = [1,3] ei rokom kore array ase
            
                                         */
                                           
        {
            if(ans.size() == 0)       //ans.size()==0 mane akhono kono array push kora hoy nai     
            {
                ans.push_back(interval);//shurute to ar merge korte hoy na tai 1st array ta direct push korlam
            }
            else
            {
                vector<int>& previousInterval = ans[ans.size()-1]; /*1st array push er por take porertar sathe compare korte hobe tai ans theke 1st er array ta previousInterval er modde niya nilam **most importanly eikhane & dite hobe nahole kaj hobe na*/
                
                if(interval[0] <= previousInterval[1])  //iterval=[1,3]ei rokom kichu so interval[0] mane 1
                {
                     previousInterval[1] = max(previousInterval[1],interval[1]);  /*jodi overlap kore tahole 2tar maximum                                                                                     endting value hobe merge korar porer man */
                }
                else
                {
                    ans.push_back(interval); //overlap na korle direct push kore dibo
                }
            }
        }
        return ans;
        
        
    }
};