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
    
    bool isSym(TreeNode* root1 , TreeNode* root2){
        // checking with the condittion 
        if(root1== nullptr && root2 == nullptr){
            return true;
        }
        if(root1 == nullptr || root2 == nullptr){
            return false;
        }

        if(root1->val == root2->val && isSym(root1->left , root2->right) && isSym(root1->right,root2->left)){
            return true;
        }
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {

        // we divide it into two parts 
       return isSym(root,root);
        
    }
};