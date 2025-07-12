class Solution {
public:
    bool canJump(vector<int>& nums) {
        int check = 0;
        for(int i =0;i<nums.size();i++){
            if(i>check) return false;
            check = max(check,nums[i]+i);
        }
        return true;
    }
};