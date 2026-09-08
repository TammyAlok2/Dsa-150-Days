
    class Solution {
public:
    int countCommas(int n) {
        int ans = 0;
         if (n < 1000) {
            return 0;
        }

        return n - 1000 + 1;

        if (n >= 1000) {
            ans += n - 1000 + 1;
        }

        if (n >= 100000) {
            ans += n - 100000 + 1;
        }

        return ans;
    }
};