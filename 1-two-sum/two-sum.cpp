class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        // we use unordered map to store the number of counts available 
        unordered_map<int,int>mp;
        int n = nums.size();



        // let's iterate the array 
        for(int i =0;i<n;i++){
            int leftSum = target - nums[i];

            if(mp.count(leftSum)){
                return {i,mp[leftSum]};
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};