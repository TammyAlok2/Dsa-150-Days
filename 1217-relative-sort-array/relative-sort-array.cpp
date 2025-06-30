class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>result;
        // step1-> Store array element in the map 
        map<int,int>count;
        for(int num:arr1){
            count[num]++;
        }

        // step -2 ) store array 1 element according to the arr2 
        for(int num:arr2){
            while(count[num]-- > 0){
             result.push_back(num);
            }
         // already stored ko delete kar do
        }
        
        // arr2 ke bache huye elmenent ko store karna hai 

        for(auto it : count){
            int num = it.first;
            int freq = it.second;
            while(freq-- > 0){
                result.push_back(num);
            }
        }

        return result;
    }
};