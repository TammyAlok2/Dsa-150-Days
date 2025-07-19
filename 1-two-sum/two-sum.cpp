class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // storing all the value in the hashmap 
        unordered_map<int,int>mp;

        for(int i =0;i<nums.size();i++){
            int remaining = target-nums[i];
            if(mp.find(remaining)!= mp.end()){
                return {i,mp[remaining]};
            }
            mp[nums[i]]=i;
        }
    


        return {-1,-1};
        
    }
};