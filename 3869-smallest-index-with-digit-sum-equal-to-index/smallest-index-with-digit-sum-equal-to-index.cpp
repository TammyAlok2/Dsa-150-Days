class Solution {
public:

    int sumOfDigits(int num){
        if(num<9){
            return num;
        }
        int sum = 0;
        while(num!=0){
            int lastDigit = num % 10;
            sum = sum + lastDigit;
           num = num /10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int sum =0;

        for(int i =0;i<nums.size();i++){
            sum = sumOfDigits(nums[i]);

            if(sum == i){
                return i;
            }
        }
        return -1;
    }
};