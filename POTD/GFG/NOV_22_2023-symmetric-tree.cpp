

class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool go(Node*r1,Node*r2)
    {
        if(!r1 && !r2)
        return 1;
        if(!r1 || !r2)
        return 0;
        if(r1->data==r2->data)
        {
            return go(r1->left,r2->right)&& go(r1->right,r2->left);
        }
        return 0;
        
    }
    bool isSymmetric(struct Node* root)
    {
        if(!root)
        return 1;
        return go(root->left,root->right);
    }
};
