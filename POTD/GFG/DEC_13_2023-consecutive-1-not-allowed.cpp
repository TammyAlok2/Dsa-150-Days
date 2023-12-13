class Solution{
public:
	// #define ll long long
long long mod=1e9+7;
int N;
int dp[100001][2];
long long get(int i,int go)
{
    if(i>=N)
    return 1;
    if(dp[i][go]!=-1)
    return dp[i][go];
    if(go)
    {
        return dp[i][go]= get(i+1,0);
    }
    return dp[i][go]= (get(i+1,0)%mod+get(i+1,1)%mod)%mod;
}
    // #define ll long long
    ll countStrings(int n) {
        memset(dp,-1,sizeof(dp));
        N=n;
       return get(0,false);
	}
};
