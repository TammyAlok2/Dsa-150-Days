//link:https://leetcode.com/problems/132-pattern/
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }

        stack<int> st;
        int max2 = INT_MIN; // Maximum "2" element found so far

        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < max2) {
                return true; // Found a valid "132" pattern
            }

            while (!st.empty() && nums[i] > st.top()) {
                max2 = st.top(); // Update max2
                st.pop();
            }

            st.push(nums[i]); // Push the current element onto the stack
        }

        return false;
    }
};
