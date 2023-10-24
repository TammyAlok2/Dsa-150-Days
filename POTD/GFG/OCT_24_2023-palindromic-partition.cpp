//link:https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1
class Solution{
public:
    bool palindrome(string str,int i,int j)
    {
       while(i<=j)
       {
           if(str[i]!=str[j]) return false;
           i++;
           j--;
       }
        return true;
    }
    int palindromicPartition(string str)
    {
        int n=str.length();
      vector<int> dp(n,INT_MAX);
      //each character forms a palindrome in itself therefore length 1 
      //we require minimunm number of cuts so that all substrings form palindrome
      for(int i=n-1;i>=0;i--) //for every index to update dp
      {
          //cout<<endl<<i<<"-> \n";
          for(int j=i;j<n;j++)//to check for palindrome
          {
            if(palindrome(str,i,j))//if substring i to j is palindrome
            {
                int len=j-i+1;
                if(i+len>=n)
                   dp[i]=0;
                else
                   dp[i]=min(dp[i],dp[i+len]+1);
                //cout<<dp[i]<<",";
            }
          }
         // cout<<endl;
      }
    // cout<<endl <<"ans : ";
      return dp[0];
    }
};
