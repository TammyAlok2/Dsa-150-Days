class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        vector<int> ans;
        int n= matrix.size();
        for(int i=0;i<n;++i){
            for(int k=0;k<=i;++k){
                ans.push_back(matrix[k][i-k]);
            }
        }
        for(int i=1;i<n;++i){
            for(int k=0;k<n-i;++k){
                ans.push_back(matrix[i+k][n-1-k]);
            }
        }
        return ans;
    }
};
