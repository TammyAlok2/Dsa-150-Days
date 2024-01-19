int minFallingPathSum(vector<vector<int>>& matrix) {
    if (matrix.empty()) {
        return 0;
    }

    int n = matrix.size();

    // Create a copy of the matrix to store the minimum falling sum
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        dp[0][i] = matrix[0][i];
    }

    // Iterate through the matrix to calculate the minimum falling sum
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j] = matrix[i][j] + min({
                dp[i - 1][j],  // directly above
                (j > 0) ? dp[i - 1][j - 1] : INT_MAX,  // diagonally left
                (j < n - 1) ? dp[i - 1][j + 1] : INT_MAX  // diagonally right
            });
        }
    }

    // The minimum falling sum is the minimum value in the last row of dp
    return *min_element(dp.back().begin(), dp.back().end());
}
