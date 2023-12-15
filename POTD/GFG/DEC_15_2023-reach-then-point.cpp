int mod=1e9+7;
	    int solve(int i, int n, vector<int>&dp){
	        if(i==n) return 1;
	        if(i>n) return 0;
	        if(dp[i]!=-1) return dp[i];
	        int one=solve(i+1, n, dp);
	        int two=solve(i+2, n, dp);
	        return dp[i]=(one+two)%mod;
	    }
	
		int nthPoint(int n){
		    // Code here
		    vector<int>dp(n+1, -1);
		    return solve(0, n, dp);
		}
