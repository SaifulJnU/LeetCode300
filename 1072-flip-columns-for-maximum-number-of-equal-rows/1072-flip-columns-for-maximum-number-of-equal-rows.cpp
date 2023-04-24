class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    map<string,int> mp;
    for(int i=0; i<n; i++) {
        string originalMat="";
        string complimentMat="";
        for(int j=0; j<m; j++) {
            originalMat.push_back(matrix[i][j] + '0');
            complimentMat.push_back((1 ^ matrix[i][j]) + '0');
        }
        mp[originalMat]++;
        mp[complimentMat]++;
    }
    int ans = 0;
    for(auto x : mp) {
        ans = max(ans, x.second);
    }
    
     return ans;
    }
};