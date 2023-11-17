
dume0_1
23 minutes ago

class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    void inorder(Node *root, vector<int> &arr)
    {
        if (root == NULL)
            return;
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }

    Node *bTreeToCList(Node *root)
    {
        vector<int> arr;
        inorder(root, arr);

        if (arr.empty())
            return nullptr;

        Node *r = new Node;
        r->data=arr[0];
        Node *ans = r;

        for (int i = 1; i < arr.size(); i++)
        {
            Node *n = new Node;
            n->data=arr[i];
            n->left = r;
            r->right = n;
            r = n;
        }

        // Making it circular
        ans->left = r;
        r->right = ans;

        return ans;
        //add code here.
    }
};
