link: https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1
class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
      void dfs (Node* root,unordered_map<int,int>&hm)
    {
        
        
        if (root == NULL) return ;
        
        {
        hm[root->data]++;
        dfs(root->left,hm);
        dfs(root->right,hm);
            
        }
    }
    
   
    
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     unordered_map<int,int>hm1;
     unordered_map<int,int>hm2;
     dfs(root1,hm1);
     dfs(root2,hm2);
     vector<int> res;
     for (auto i:hm1)
     {
         if (hm2[i.first]>0)
         res.push_back(i.first);
     }
     sort(res.begin(),res.end());
     return res;
    }
};

