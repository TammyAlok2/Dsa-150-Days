class Solution {
public:

    // int nearestChecker(int storeResult , int currentResult,int target){

    // }
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        // first we need to sort the array 
        sort(nums.begin(),nums.end());

         int result = nums[0] + nums[1] + nums[2];

        // we need to make one digit constant and iterate
        for(int i = 0;i<n;i++){
            
            int constant = i;
            int first = i+1;
            int end = n-1;
         
            // let's apply two pointer approach similar to 3 sum 
            while(first<end){
                int sum = nums[first] + nums[end] + nums[constant];
                 if(abs(target - sum) < abs(target - result))
                        {
                            result = sum;
                        }

                if(sum == target){
                    result = sum ;
                     return result;
                }
                else if(sum > target){
                   
                    end --;
                }
                else if(sum < target){
                   
                    first ++;
                }
            }
        }
        return result;
        
    }
};