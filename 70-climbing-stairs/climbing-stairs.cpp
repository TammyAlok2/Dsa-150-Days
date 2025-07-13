class Solution {
public:
    int solve(int n, vector<int>& memo) {
    if (n <= 1) return 1;

    // Step 1: Check if already solved
    if (memo[n] != -1) return memo[n];

    // Step 2: Recur and save the result
    memo[n] = solve(n - 1, memo) + solve(n - 2, memo);

    return memo[n];
}

int climbStairs(int n) {
    vector<int> memo(n + 1, -1);  // initialize with -1
    return solve(n, memo);
}
};