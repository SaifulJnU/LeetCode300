class Solution {
public:
    
    bool search(vector<vector<char>>&board, string &word, int n, int m, int  i, int j, int idx)
    {
        if(idx == word.size()) return true;
        if(i<0 or i>=n or j<0 or j>=m or board[i][j] != word[idx])return false;
        
        char ch = board[i][j];
        board[i][j] = '#'; //mark as we are no allowed to revisit the same index
        
        bool op1 = search(board, word, n, m, i+1, j, idx+1);
        bool op2 = search(board, word, n, m, i-1, j, idx+1);
        bool op3 = search(board, word, n, m, i, j+1, idx+1);
        bool op4 = search(board, word, n, m, i, j-1, idx+1);
        
        board[i][j] = ch;
        
        return op1 or op2 or op3 or op4; //any option ture return ture
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==word[0])
                {
                    if(search(board, word, n, m, i, j, 0))return true;
                }
            }

        }
        
        return false;
    }
};