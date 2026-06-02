class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        int start = 0;
        int end = 0;
        int total = INT_MAX;

    // first get the first subarray 

    while(end < n){

    sum += nums[end];
     // if the sum is equal ot target then we got the first subarray
    //  if(sum == target){

    //  }
     while(sum>= target){
        total = min(total,end-start+1);
        sum -= nums[start++];
     }
     end ++;

    }
    return total == INT_MAX ? 0 : total  ;
        
    }
};