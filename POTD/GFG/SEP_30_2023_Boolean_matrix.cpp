//link:https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1
class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
         int r = m.size();
        int c = m[0].size(); 
        vector<vector<int>> ans(r,vector<int>(c,0));
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(m[i][j] == 1){
                    int trow = i;
                    int tcol = j;
                    //make entire row 1
                    int k = tcol;
                    while(k<c){
                        ans[trow][k] = 1;
                        k++;
                    }
                    k = tcol;
                    while(k>=0){
                        ans[trow][k] = 1;
                        k--;
                    }
                    //make entire col 1
                    int l = trow;
                    while(l<r){
                    ans[l][tcol] = 1;
                    l++; 
                    }
                    l = trow;
                    while(l>=0){
                        ans[l][tcol] = 1;
                        l--;
                    }
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                m[i][j] = ans[i][j];
            }
        }
    }
};
