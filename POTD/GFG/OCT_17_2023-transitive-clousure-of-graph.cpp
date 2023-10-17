//link:https://practice.geeksforgeeks.org/problems/transitive-closure-of-a-graph0930/1
class Solution{
public:
   vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<vector<int>>reach(N,vector<int>(N,1));
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++){
                if(i!=j)
                reach[i][j]=graph[i][j];
            }
                
        for(int k=0; k<N; k++){
            for(int i=0; i<N; i++){
                for(int j=0; j<N; j++){
                    reach[i][j]=reach[i][j]||(reach[i][k]&&reach[k][j]);
                }
            }
        }
        return reach;
    }
};
