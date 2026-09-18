class Solution {
public:
    void reverseString(vector<char>& s) {
        // let's use two pointer approach to solve this question 
        int left = 0;
        int right = s.size()-1;

        while(left<=right){
            swap(s[left],s[right]);
            left++;
            right--;
        }

        
    }
};