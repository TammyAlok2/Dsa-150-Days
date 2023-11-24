class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<long long> ans(1, 1), t;
        while (n-- > 1) {
            t.resize(ans.size() + 1, 1);
            for (int i = 1; i < ans.size(); i++) t[i] = (ans[i - 1] + ans[i]) % 1000000007;
            ans = t;
        } 
        return ans;
    }
};
