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
    
    void inOrder(TreeNode* root ,vector<int>&result){
        // base case 
        if(root == nullptr){
            return ;
        }

        // first go to left 
        inOrder(root->left,result);
        // then store root 
        result.push_back(root->val);
        // then go to right
        inOrder(root->right,result);
    }
   
    vector<int> inorderTraversal(TreeNode* root) {

    // here in Inorder traversal we first go to left , root ,right

     vector<int>result;
     inOrder(root,result);
     return result;
        
    }
};