class Solution {
public:
    bool makeEqual(vector<string>& words) {
      
        // first we make an unordered map 
        unordered_map<char,int>count;
        for(auto a : words){
            for(char x :a){
                count[x]++;
            }
        }
        
        int n = words.size();
        for(auto a : count){
           if(a.second %n != 0) 
            return false;
        }
        return true;
    }
};
