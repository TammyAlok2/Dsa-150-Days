class Solution {
public:

    int calculateReverse (char s,int i){
        int sum =  (123 - int(s)) * i;
        return sum ;
    }
    int reverseDegree(string s) {
        
        int sum = 0 ;
        for (int i =1;i<=s.size();i++){
            int reverseValue = calculateReverse(s[i-1],i);
            sum += reverseValue;
        }
        return sum;
    }
};