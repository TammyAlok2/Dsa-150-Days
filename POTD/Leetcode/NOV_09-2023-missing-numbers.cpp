class Solution {
public:
    int missingNumber(vector<int>& nums) {
           int n = nums.size();
        int total_sum = (n*(n+1))/2;
        for(auto x: nums){
            total_sum -=x;
        }
        return total_sum;
    
    }
};
