class Solution
{
public:
  void inorder(Node* root, unordered_map<int, int> &m){
        if(!root) return;
        m[root->data]++;
        inorder(root->left, m);
        inorder(root->right, m);
    }

    int countPairs(Node* root1, Node* root2, int x)
    {
        int res{};
        unordered_map<int, int> m1, m2;
        inorder(root1, m1);
        inorder(root2, m2);
        for(auto i:m1){
            if(m2.find(x - i.first) != m2.end()) res++;
        }
        return res;}
};
