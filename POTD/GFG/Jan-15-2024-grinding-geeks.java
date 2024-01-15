 int dp[][];
    public int max_courses(int n, int tt, int[] c) { 
         dp = new int[n+1][tt+1];
        //  for(int[] it:dp)for(int i=0;i<t+1;i++)it[i]=-1;//memo && DP
         for(int i=n-1;i>=0;i--){
             for(int t=0;t<=tt;t++){ 
                 dp[i][t]=0+dp[i+1][t];
                 if(c[i]<=t){
                    dp[i][t]=Math.max(dp[i+1][t],
                    1+dp[i+1][t-c[i]+((int)Math.floor(0.9*c[i]))]);
                }
             }
         }
         return dp[0][tt];
    }
    int rec(int i, int t, int A[]){
        if(i>=A.length || t<=0) return 0;
        if(dp[i][t]!=-1) return dp[i][t];
        int nt=0+rec(i+1,t,A);
        if(A[i]<=t){
            nt=Math.max(nt,1+rec(i+1,t-A[i]+((int)Math.floor(0.9*A[i])),A));
        }return dp[i][t]=nt;
    }
