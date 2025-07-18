class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // we are using two pointer approach to solve this question 
        int i =0;
        for(int j = 1;j<nums.size();j++){
            // compare with previous one 
            if(nums[i]!= nums[j]){
                i++;
                swap(nums[i],nums[j]);

            }

        }
        return i+1;

        
    }
};