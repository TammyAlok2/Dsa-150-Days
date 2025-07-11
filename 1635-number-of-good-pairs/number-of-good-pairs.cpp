class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int, int> freq;
    int count = 0;

    for (int num : nums) {
        count += freq[num]; // Count how many times we’ve seen num before
        freq[num]++;        // Now we’ve seen num one more time
    }

    return count;
    }
};