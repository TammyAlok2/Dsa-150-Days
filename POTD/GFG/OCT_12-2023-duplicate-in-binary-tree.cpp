class Solution {
  public:
   unordered_map<string,int>mp;
    string helper(Node* root){
        if(!root)   return "#";
        
        if(!root->left && !root->right){
            return to_string(root->data);
        }
        
        string s = to_string(root->data);
        s += helper(root->left);
        s += helper(root->right);
        
        ++mp[s];
        return s;
    }
    int dupSub(Node *root) {
         // code here
         mp.clear();
         helper(root);
         for(auto it : mp){
             if(it.second >= 2)     return true;
         }
         return false;
    
    }
};
