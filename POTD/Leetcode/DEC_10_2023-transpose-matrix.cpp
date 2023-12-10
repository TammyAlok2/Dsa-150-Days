class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        if(m == n){
            for(int i=0; i<m; i++){
                for(int j=i+1; j<n; j++){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            return matrix;
        }
        else {
            vector<vector<int>> rVal(n, vector<int>(m, 0));
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    rVal[j][i] = matrix[i][j];
                }
            }
            return rVal;
        }                                          
        
    }
};
