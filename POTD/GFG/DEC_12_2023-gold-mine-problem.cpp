class Solution{
 static int maxGold(int n, int m, int M[][]){
        
        int maxAmount=Integer.MIN_VALUE;
        int[][] dp = new int[n][m];
        
        for(int col=m-1;col>=0;col--){
            for(int row=0;row<n;row++){
                dp[row][col]=M[row][col];
                if(col!=m-1){
                    int rightUp= (row-1 >= 0) ? dp[row-1][col+1] : 0;
                    int rightDown= (row+1<n) ? dp[row+1][col+1] : 0;
                    dp[row][col] += (Math.max(dp[row][col+1], Math.max(rightUp,rightDown)));
                }
                
                if(col==0){
                    maxAmount= Math.max(maxAmount, dp[row][col]);
                }
                
            }
        }
        return maxAmount;
        
    }
}
