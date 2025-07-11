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
    int maxDepth(TreeNode* root) {

       // base case 
       if(root==nullptr){
        return 0;
       }
        // we use recursive approach to solve it and divide into two left and right 
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return (1+max(left,right));
    }
};