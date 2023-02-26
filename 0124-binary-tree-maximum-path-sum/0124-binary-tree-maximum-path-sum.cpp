/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root, int& maxiSum)
    {
        if(root==NULL)return 0;
        
        int lh=max(0, maxPathSum(root->left, maxiSum));
        int rh=max(0, maxPathSum(root->right, maxiSum));
        
        maxiSum = max(maxiSum, lh+rh+root->val);
        
        return max(lh,rh)+root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        
        int maxiSum = INT_MIN;
        
        maxPathSum(root, maxiSum);//recursive call to solve
        
        return maxiSum;
    }
};