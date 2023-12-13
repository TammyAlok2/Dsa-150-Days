class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>rowMat(n,0);
        vector<int>colMat(m,0) ;
        
        for(int row =0;row<n;row++){
            for(int col =0 ; col <m;col++){
                if(mat[row][col] == 1)
                {
                    rowMat[row]++;
                    colMat[col]++;
                }
            }
        }
        
        int ans =0;
        for(int row =0;row<n;row++)
        {
            for(int col =0;col<m;col++){
                if(mat[row][col]==1){
                      if(rowMat[row] ==1 && colMat[col]==1)
                {
                    ans++;
                }
                }
              
            }
        }
        return ans;
    }
};
