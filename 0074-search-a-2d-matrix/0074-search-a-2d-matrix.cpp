class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //concept aditya verma
        int i=0;
        int j=matrix[0].size()-1;
        
        int n=matrix.size();  //row size
        int m=matrix[0].size(); //column size
        
        while((i>=0 and i<n) and (j>=0 and j<m)) //martix boundary condition
        {
            if(matrix[i][j]==target) return true; 
            else if(matrix[i][j]>target) j--;    //go in the left side
            else if(matrix[i][j]<target) i++;    //go in down side
        }
        
        return false;
    }
};