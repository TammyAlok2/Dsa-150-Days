class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;
        for(char ch : sentence){
            letters.insert(ch);
        }
        return letters.size()==26;
    }
};