//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        // Code here
        
        vector<vector<int>>ans;
        
        int n1 = matrixA.size();
        int m1 = matrixA[0].size();
        
        int n2 = matrixB.size();
        int m2 = matrixB[0].size();
        
        //result (n1, m2)
        
        for(int i=0; i<n1; i++)
        {
            vector<int>v;
            for(int j=0; j<m2; j++)
            {
                int sum =0;
                
                for(int k=0; k<m1; k++)
                {
                    sum+=matrixA[i][k]*matrixB[k][j];
                }
                
                v.push_back(sum);
            }
            ans.push_back(v);
        }
        
        
        
      matrixA=ans;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends