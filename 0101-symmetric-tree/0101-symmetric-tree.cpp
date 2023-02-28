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
    bool sym(TreeNode* A, TreeNode* B)
    {
        if(A==NULL and B==NULL)return true;
        if(A==NULL or B==NULL)return false;
        
        if(A->val != B->val)return false;
        
        return A->val==B->val and sym(A->left, B->right) and sym(A->right, B->left); 
    }
    
    bool isSymmetric(TreeNode* root) {
        
        return sym(root,root);
    }
};