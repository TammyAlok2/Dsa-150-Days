//link:https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1


class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
          long long ans=1ll*N*N;
        for(int i=1; i<N+1; i++){
            ans-=N%i;
        }
        return ans;
    }
};
