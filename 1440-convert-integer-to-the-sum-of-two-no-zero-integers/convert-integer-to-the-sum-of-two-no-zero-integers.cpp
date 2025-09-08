class Solution {
public:

    bool hasZero(int num){
        while(num >0){
        int firstDigit = num%10;
        if(firstDigit ==0) return true;
        num=num/10;

        }


        return false;
    }
    vector<int> getNoZeroIntegers(int n) {


        int first ,last;
        for(int i =1 ;i<n;i++){
            if(hasZero(i) || hasZero(n-i)) continue;
            if(i + n -i == n){
              first = i;
              last = n-i;
            }
        }
        return {first,last};
    }
};