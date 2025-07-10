class Solution {
public:
   bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr)
        freq[num]++;

    unordered_set<int> seen;
    for (auto& pair : freq) {
        if (seen.count(pair.second))
            return false;
        seen.insert(pair.second);
    }
    return true;
}

};