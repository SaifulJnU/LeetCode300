class Solution {
public:
 
    void solve(vector<vector<int>>&ans, int sr, int sc, int initialColor, int newColor)
    { 
        int n = ans.size();
        int m = ans[0].size();
        //boundary case
        if((sr<0 or sr>=n) or (sc<0 or sc>=m) or (ans[sr][sc]!=initialColor) or (ans[sr][sc] == newColor)) 
        {
         return;   
        }
        //update new color
        ans[sr][sc]=newColor;
           
        
           solve(ans, sr+1, sc, initialColor, newColor);
           solve(ans, sr-1, sc,initialColor, newColor);
           solve(ans, sr, sc+1,initialColor, newColor);
           solve(ans, sr, sc-1,initialColor, newColor);
           
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int newColor = color;
        int initialColor = image[sr][sc];
        vector<vector<int>>ans = image;
        solve( ans, sr, sc, initialColor, newColor);
        return ans;
        
    }
};