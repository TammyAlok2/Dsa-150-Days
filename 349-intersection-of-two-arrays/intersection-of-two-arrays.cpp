class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // creating an unordered set and storing the num1 value in it
        unordered_set<int>s(nums1.begin(),nums1.end());
        vector<int>result;

        // now iterating in the nums2

        for (int x :nums2){
            if(s.count(x)){

                // if both matches store on result
               result.push_back(x);

               // delete from the set
               s.erase(x);

            }
        }

return result;
    }
};