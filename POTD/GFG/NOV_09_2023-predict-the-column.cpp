//https://www.geeksforgeeks.org/problems/predict-the-column/1

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
 int maxCount = -1;
        int result = -1;
        
        for(int i = 0;i<N;i++){
            int ZeroCount = 0;
            for(int j = 0;j<N;j++){
                if(arr[j][i] == 0){
                    ZeroCount++;
                }
            }
            
            if(ZeroCount == 0)
                continue;
            else{
                if(ZeroCount > maxCount){
                    maxCount = ZeroCount;
                    result = i;
                }
            }
        }
        
        return result;
        
    }
};
