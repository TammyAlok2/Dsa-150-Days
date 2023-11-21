class Solution
{
    public:
    bool isIdentical(Node *a, Node *b)
    {
        if(a==NULL and b==NULL) return true;
        if((a==NULL or b==NULL) or (a->data != b->data)) return false;
        return isIdentical(a->left,b->left) && isIdentical(a->right,b->right);
    }
};
