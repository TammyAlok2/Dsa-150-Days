class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        //1) storing broken letter in the set
          unordered_set<char>broken(brokenLetters.begin(),brokenLetters.end());
          // 2) start counting 
          int count =0;

          // 3) use string to splitting word
            stringstream ss(text);
            string word;

          // start iteration in word 
           while(ss >>word){
            bool isBroken = false;
            for(char ch :word){
                if(broken.count(ch))
{
    isBroken =true;
    break;
}            }
           if(!isBroken) count++;
           }

          // 5) check if the char found in the word 



          // 6) if found broken down it

          //7 ) count it
          return count;
    
    
    
    } 
};