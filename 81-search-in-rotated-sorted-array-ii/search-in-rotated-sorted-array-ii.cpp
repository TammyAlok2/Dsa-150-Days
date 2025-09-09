class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int low =0;
        int high = nums.size()-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]==target) return true;

            // now we have mid with same number then we cannot able to find sorted array 
            if(nums[low] == nums[mid] && nums[mid] == nums[high] ){
                low++;
                high--;
            }

            // now start if left side is sorted 
           else if(nums[low] <= nums[mid]){
                // checking left side 
                if(nums[low] <=target && target< nums[mid]){
                    high = mid-1;
                }
                else {
                   low = mid +1;
                }
            }
            else {
                if(nums[mid]< target && target <= nums[high]){
                    low = mid +1;
                }
                else {
                    high = mid-1;
                }
            }
        }
        return false;
        
    }
};