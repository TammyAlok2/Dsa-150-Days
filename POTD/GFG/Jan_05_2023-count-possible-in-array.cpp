
class Solution{
	public:
	int mod=1000000007;
	int TotalWays(int N)
	{
	    // Code here
	      vector<int>dp(N+1,0);
        dp[1]=2;
        dp[2]=3;
        for(int i=3;i<=N;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        long long int a=dp[N];
        return (a*a)%mod;
	    
	    
	}
};
