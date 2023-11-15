class Solution {
  public:
  int dp[2001];
    int mod = 1e9+7;
    int fn(string &s, int i)
    {
        if(i==s.length())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        vector<int> vis(26,0);
        int  ans = 0;
        for(int j=i;j<s.length();j++)
        {
            if(vis[s[j]-'a'])
                continue;
            vis[s[j]-'a'] = 1;
            ans = (ans + 1 + fn(s,j+1))%mod;
        }
        return dp[i] = ans;
    }
    int distinct(string s) {
        memset(dp,-1,sizeof(dp));
        return fn(s,0);
    }
    string betterString(string str1, string str2) {
        // code here
        int a = distinct(str1);
        int b = distinct(str2);
        if(a>=b)return str1;
        return str2;
    }
