class Solution {
public:

    struct Compare {
        bool operator()(const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a > b;
            }

            return a.size() > b.size();
        }
    };

    string kthLargestNumber(vector<string>& nums, int k) {

        priority_queue<
            string,
            vector<string>,
            Compare
        > min_heap;

        for (string num : nums) {

            min_heap.push(num);

            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        return min_heap.top();
    }
};