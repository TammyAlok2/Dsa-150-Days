//link:https://practice.geeksforgeeks.org/problems/eventual-safe-states/1

class Solution {
  public:
    bool dfs(int node,vector<int> adj[],vector<int> &vis){
        vis[node]=1;
        bool ans=true;
        for(auto i : adj[node]){
            if(vis[i])
                return false;
            ans &=dfs(i,adj,vis);
        }
        vis[node]=0;
        return ans;
    }
    
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int> vis(V,0),ans;
        for(int i=0;i<V;i++){
            if(dfs(i,adj,vis))
                ans.push_back(i);
        }
        return ans;
    }
};
