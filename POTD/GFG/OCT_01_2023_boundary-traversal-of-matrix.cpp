//linK:https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1
class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
  int mod=1e9+7;
        int n=s.size();
        long long dp[n+1];
        s=" "+s;              //for making string 1 indexing 
        dp[0]=1;
        unordered_map<char,int> mp;
        for(int i=1;i<=n;i++)
        {
            dp[i]=2*dp[i-1];
            if(mp.find(s[i])!=mp.end())
            {
                int idx=mp[s[i]];
                dp[i]=(dp[i]-dp[idx-1]+mod);      // for removing repeating                                                                    //   subsequences
            }
            mp[s[i]]=i;
            dp[i]%=mod;
        }
        return dp[n];
	}
};
