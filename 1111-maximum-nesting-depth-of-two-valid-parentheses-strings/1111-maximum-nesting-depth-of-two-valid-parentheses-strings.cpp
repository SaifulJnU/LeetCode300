class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        
        vector<int>v;
        int open=0;
        
        for(int i=0; i<seq.size(); i++)
        {
            if(seq[i]=='(')
            {
                open++;
                v.push_back(open%2);
               
            }
            else
            { 
                v.push_back(open%2);
                open--;
               
            }
        }
        
        return v;
    }
};