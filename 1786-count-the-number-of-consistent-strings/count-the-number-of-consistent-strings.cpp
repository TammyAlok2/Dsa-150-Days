class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        // there are five steps for answering 
        // 1) Store the element in the set (allowed)
        unordered_set<char>allowedSet(allowed.begin(),allowed.end());
        // 2) Intialize count =0 
        int count =0;
        // 3) Now go one by one in the words 
        for(string word :words){
            bool isValid =true;

         // 4) Now Check word in allowed value 
         for(char ch:word){
            if(allowedSet.find(ch)== allowedSet.end()){
                     // 5) mark it false for not checking in future 
                isValid = false;
                break ;// no need to check in future 
            }
         }
         // 6) count it
         if(isValid) count++;
        }
        return count;
   
        
    }
};