class Solution {
public:
    
    int countOnes(int n){
        int count = 0;
        while(n){
            n &= (n-1);
            count++;
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
    sort(arr.begin(),arr.end(),[&](int a,int b){
        int countA = countOnes(a);
        int countB = countOnes(b);

        return countA == countB ? a<b :countA < countB;
    });
return arr;
    }
};