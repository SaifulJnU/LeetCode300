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
       //iterative
        
        if(root==NULL)return;
        
        stack<TreeNode*>st;
        st.push(root);
        
        while(!st.empty())
        {
            TreeNode* node = root;
            node = st.top();
            st.pop();
            
            v.push_back(node->val);
            if(node->right != NULL) st.push(node->right);
            if(node->left != NULL) st.push(node->left);
        }
        
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        PreOrder(root, v);
        
        return v;
    }
};