class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int reverseValue = 'z' - s[i] + 1;
            sum += reverseValue * (i + 1);
        }

        return sum;
    }
};