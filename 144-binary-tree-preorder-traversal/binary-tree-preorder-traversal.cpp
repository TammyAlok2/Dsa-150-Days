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
   
   void preOrder(TreeNode* root, vector<int>&result){
    if(root== nullptr){
        return;
    }
    result.push_back(root->val);
    preOrder(root->left,result);
    preOrder(root->right,result);

   }

    vector<int> preorderTraversal(TreeNode* root) {
        //here in preorder Traversal we first go to root->left subtree ->right subtree
        vector<int>result;
        preOrder(root,result);
        return result;
        
    }
};