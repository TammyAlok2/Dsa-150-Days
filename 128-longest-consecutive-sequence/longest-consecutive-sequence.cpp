class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // step 1 ) make set to store the elements 
          unordered_set<int> numSet(nums.begin(), nums.end()); // Step 1: Add all to a set
    int longest = 0;

    for (int num : numSet) {
        // Step 2: Only start if it's the beginning of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int count = 1;

            // Step 3: Count the consecutive numbers
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
    
        
    }
};