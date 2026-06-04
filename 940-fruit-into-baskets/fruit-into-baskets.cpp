class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int i =0,j=0,n=fruits.size();
        int maxAnswer = INT_MIN;


        unordered_map<int,int>mp;
        if(fruits.size() == 1 || fruits.size() ==2){
            return fruits.size();
        }

        while(j<n){
            // calculations : Storing the number and the frequency
            mp[fruits[j]]++;

            // now checking the condition
            if(mp.size() < 2){
                maxAnswer = max(maxAnswer, j-i+1);
                j++;
            }
            else if(mp.size() == 2){
                maxAnswer = max(maxAnswer, j-i+1);
                j++;
            }
            else if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]== 0){
                        mp.erase(fruits[i]);
                    }
                    i++;
                }
               j++;    
            }
            
        }
        return maxAnswer ==INT_MIN ? -1: maxAnswer;

    }
};