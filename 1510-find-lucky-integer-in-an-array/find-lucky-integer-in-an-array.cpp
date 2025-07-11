class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    int ans = -1;
    for (auto pair : freq) {
        if (pair.first == pair.second) {
            ans = max(ans, pair.first);
        }
    }

    return ans;
    }
};