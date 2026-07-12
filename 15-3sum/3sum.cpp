class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        // storing the resulatant
        vector<vector<int>>result;

        // sort the array so that we can put two pointer 
        sort(nums.begin(),nums.end());

        for(int i =0;i<n-2;i++){
           
           // checking for the duplicates 
           if(i > 0 && nums[i] == nums[i-1]) continue;

           // intialinzing two pointers 
           int j = i+1, k = n-1;

           while(j<k){
            int sum = nums[i] + nums[j] + nums[k] ;
            if(sum == 0){
                // update on the resulant array 
                result.push_back({nums[i],nums[j],nums[k]});
                   j++ ;
                   k--;

              
              while(j<k && nums[j] == nums[j-1]) j++;
              while(j<k && nums[k] == nums[k+1]) k--;
           

            }
            else if(sum > 0){
                k--;
            }
            else {
                j++;
            }

           }

            
        }
        return result;
        
    }
};