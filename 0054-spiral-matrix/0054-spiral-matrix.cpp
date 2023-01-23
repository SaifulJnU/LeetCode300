class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        
        int row_start=0;
        int row_end= matrix.size()-1;//row
        
        int col_start=0;
        int col_end=matrix[0].size()-1;//col
        
    
        while(row_start<=row_end and col_start<=col_end) //for printing whole matrix
        {
        //for row start
        //ei khetre row er value thik thakche ar coloumn change hocche
        for(int col=col_start; col<=col_end; col++)
        {
                v.push_back(matrix[row_start][col]);
        }
        row_start++;
        
        //for coloumn end
        //row change hocche start to end ar coloumn end fix thakche
        for(int row=row_start; row<=row_end; row++)
        {
                v.push_back(matrix[row][col_end]);
        }
        col_end--;

        //for row end
        //coloumn change hocche end to start ar row end thik thakhe
        if(row_start<=row_end)
        {
             for(int col = col_end; col >= col_start; col--)
                {
                        v.push_back(matrix[row_end][col]);
                }
                row_end--;
        
        }
       
        //for coloumn start 
        //row start change hocche end to start ar strat coloumn thik thakche
        if(col_start<=col_end)
        {
             for(int row = row_end; row >= row_start; row--)
            {
                    v.push_back(matrix[row][col_start]);
            }
            col_start++;
        }
        }
       
        
        return v;
    }
};