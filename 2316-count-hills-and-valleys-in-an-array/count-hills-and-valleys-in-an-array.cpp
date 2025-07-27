class Solution {
public:
   
int countHillValley(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 1; i < n - 1; ++i) {
        // Skip same value as previous
        if (nums[i] == nums[i - 1]) continue;

        // Find closest non-equal left
        int left = i - 1;
        while (left >= 0 && nums[left] == nums[i]) left--;

        // Find closest non-equal right
        int right = i + 1;
        while (right < n && nums[right] == nums[i]) right++;

        if (left >= 0 && right < n) {
            if (nums[i] > nums[left] && nums[i] > nums[right]) {
                count++; // Hill
            } else if (nums[i] < nums[left] && nums[i] < nums[right]) {
                count++; // Valley
            }
        }
    }

    return count;
}
};