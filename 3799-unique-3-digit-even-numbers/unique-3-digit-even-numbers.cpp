class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        // Count available copies of each digit
        for (int digit : digits) {
            freq[digit]++;
        }

        int count = 0;

        // Generate every 3-digit even number
        for (int num = 100; num <= 998; num += 2) {
            int x = num;

            int a = x / 100;        // hundreds
            int b = (x / 10) % 10;  // tens
            int c = x % 10;         // units

            int required[10] = {};

            required[a]++;
            required[b]++;
            required[c]++;

            bool possible = true;

            for (int d = 0; d <= 9; d++) {
                if (required[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                count++;
            }
        }

        return count;
    }
};