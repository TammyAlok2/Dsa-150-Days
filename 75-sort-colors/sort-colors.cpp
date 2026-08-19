class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = nums.size()-1;

        while(one <= two ){
            if(nums[one] == 2){
                swap(nums[one] ,nums[two]);
                two--;
            }
            else if (nums[one] == 1){
                one ++;
            }
            else {
                swap(nums[zero],nums[one]);
                zero ++;
                one ++;
            }
        }
    }
};