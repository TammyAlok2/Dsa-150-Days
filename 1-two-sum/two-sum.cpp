class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // optimal solution

        unordered_map<int,int>mp;
        int n = nums.size();

      

        // now we stored it on the map now iterate it 
        for(int i =0;i<n;i++){
            int leftSum = target - nums[i];

            // let's check it on the map
            if(mp.find(leftSum) != mp.end()){
                return {i,mp[leftSum]};
            }
            mp[nums[i]] = i;
            
        }
        return {-1,-1};
    }
};