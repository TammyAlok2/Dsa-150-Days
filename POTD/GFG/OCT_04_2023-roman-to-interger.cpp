//link:https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
            unordered_map<char, int> mapping = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        pair<char, int> current = make_pair('#', 0); // We will keep a record of current character and it's count
        for(int i = 0; i < str.length(); i++){
            if(str[i] == current.first && current.second > 1){
                current.second++;          // If we get the same character, we increment the count
                ans += mapping[str[i]];
            }
            else{
                current.first = str[i];
                current.second = 1;
                if(mapping[str[i+1]] > mapping[str[i]] && current.second == 1){
                    ans -= mapping[str[i]];    // If the next roman literal is greater and current character count is 1, then we decrement the answer
                }
                else{
                    ans += mapping[str[i]];
                }
            }
            
        }
        return ans;
    }
};
