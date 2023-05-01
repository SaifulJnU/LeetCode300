public class Solution {
    public int MaxEqualRowsAfterFlips(int[][] matrix) {
       
        int n = matrix.Length;
        int m = matrix[0].Length;
        Dictionary<string,int> mp = new Dictionary<string,int>();
        for(int i=0; i<n; i++) {
            string originalMat="";
            string complimentMat="";
            for(int j=0; j<m; j++) {
                originalMat += matrix[i][j].ToString();
                complimentMat += (1 ^ matrix[i][j]).ToString();
            }
            if (mp.ContainsKey(originalMat)) {
                mp[originalMat]++;
            } else {
                mp[originalMat] = 1;
            }
            if (mp.ContainsKey(complimentMat)) {
                mp[complimentMat]++;
            } else {
                mp[complimentMat] = 1;
            }
        }
        int ans = 0;
        foreach(var x in mp) {
            ans = Math.Max(ans, x.Value);
        }
        return ans;
    }
}
    
