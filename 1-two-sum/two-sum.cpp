class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // creating an unordered_map to store the key value pairs 
        unordered_map<int,int>mp;

        // let's iterate in the array 
        for(int i =0;i<nums.size();i++){
            int leftSum = target-  nums[i];

            if(mp.count(leftSum)){
                return {mp[leftSum],i};
            }

            // adding new values in the map 
            mp[nums[i]] = i;

        }
        return {-1,-1};
    }
};