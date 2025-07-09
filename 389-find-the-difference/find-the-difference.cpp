class Solution {
public:
    char findTheDifference(string s, string t) {
        // uisng xor to solve the probole 
        char result = 0;
        for(char ch : s){
            result ^= ch;
        }
        for(char ch : t){
            result ^=ch;
        }
        return result;
    }
};