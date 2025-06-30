class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // step 1 > First the store tthe number in the map 
        map<int,int>count;

        for(int num:nums){
            count[num]++;
        }

        // now making sorting functio 
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(count[a]==count[b])
return a>b; // if same , bigger number first
return count[a] < count[b];// small freq comes firt 
            

        });
        return nums;
    }
};