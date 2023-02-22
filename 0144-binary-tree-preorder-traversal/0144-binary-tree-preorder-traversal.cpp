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
    void PreOrder(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        //Root, Left, Right
        v.push_back(root->val);
        PreOrder(root->left, v);
        PreOrder(root->right, v);
        
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        PreOrder(root, v);
        
        return v;
    }
};