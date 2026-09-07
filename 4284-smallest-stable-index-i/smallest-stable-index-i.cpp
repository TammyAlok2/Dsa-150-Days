class Solution {
public:

    int returnMaximum(int start,int end , vector<int>&nums){
        int maximum = INT_MIN;
        for(int i = start;i<=end;i++){
            if(nums[i] >= maximum){
                maximum = nums[i];
            }
        }
        return maximum;
    }
    int returnMinimum(int start,int end , vector<int>&nums){
        int minimum= INT_MAX;
        for(int i = start;i<=end;i++){
            if(nums[i] <= minimum){
                minimum = nums[i];
            }
        }
        return minimum;        
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int smallestStableIndex = INT_MAX;
        int n = nums.size();

        for(int i = 0;i<n;i++){
          int largestElement = returnMaximum(0,i,nums);
          int smallestElement = returnMinimum(i,n-1,nums);

          int score = largestElement - smallestElement;
          if(score <= k){
            smallestStableIndex = min(smallestStableIndex,i);
          }
        }
        return smallestStableIndex == INT_MAX ? -1 : smallestStableIndex ;
        
    }
};