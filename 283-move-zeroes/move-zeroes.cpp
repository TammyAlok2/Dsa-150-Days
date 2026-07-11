class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // using two pointer approach 
        // intializing left and right from 0 
        int left =0;
        for(int right =0;right<nums.size();right++){
            if(nums[right]!=0){
                swap(nums[right],nums[left]);
                left++;
            }
        }
        
    }
};