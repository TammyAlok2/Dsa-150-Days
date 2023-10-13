//link:https://practice.geeksforgeeks.org/problems/floor-in-bst/1
class Solution{
private:
void fun(Node *root, int x, int &a)
{
    if(root == NULL)
    {
        return;
    }
    if(root->data<=x)
    {
        a=max(a, root->data);
        fun(root->right, x, a);
    }
    else
    {
        fun(root->left, x, a);
    }
}

public:
    int floor(Node* root, int x)
    {
        int a=-1;
        fun(root, x, a);
        return a;
    }
};
