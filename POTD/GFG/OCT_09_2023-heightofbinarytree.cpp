//link:https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
class Solution {
    //Function to find the height of a binary tree.
    int height(Node node) 
    {
        // code here
        if(node==null)
        {
            return 0;
        }
        
        int left=height(node.left);
        int right=height(node.right);
        
        int ans=left>right?left+1:right+1;
        return ans;
    }
}
