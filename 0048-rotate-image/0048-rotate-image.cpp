class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix[0].size(); 
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);

            }
        }
        
        
        // for(int i=0; i<n; i++)
        // {
        //     reverse(matrix[i].begin(), matrix[i].end());
        // }
        
        //row wise reversing raw implementation
       
        for(int i=0; i<n; i++)
        {
             int start=0;
             int end = n-1;
             while(start<end)
            {
                 
                // swap(matrix[i][start],matrix[i][end]);
                 //swap
                 int temp = matrix[i][start];
                 matrix[i][start] = matrix[i][end];
                 matrix[i][end] = temp;
                 start++;
                 end--;
            }
        
        }
       
    }
};