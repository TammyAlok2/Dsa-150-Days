//link:https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1
class Solution{
		

	public:
int maxSumIS(int arr[], int n)  
{  
    // Your code goes here
    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = arr[i];
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i])
                dp[i] = max(dp[i], arr[i]+dp[j]);
        }
    }
    return *max_element(dp, dp+n);
} 
};
