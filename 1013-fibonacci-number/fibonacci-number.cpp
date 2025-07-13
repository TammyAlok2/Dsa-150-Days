class Solution {
public:

int solve(int n,vector<int>& memo){
        // basa case
        if(n<=1){
            return n;
        }

        if(memo[n]!=-1){
            return memo[n];
        }

     memo[n] = solve(n-1,memo)+solve(n-2,memo);
     return memo[n];
}

    int fib(int n) {
        // werre4 using dp first time thanks to radha ji 
    
  vector<int>dp (n+1,-1);
  return solve(n,dp);

        
    }
};