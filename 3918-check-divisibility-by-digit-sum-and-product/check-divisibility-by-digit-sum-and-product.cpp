class Solution {
public:

    int digitSumAndProduct (int n){
        int number = n;
        int sum =0;
        int product =1;
        while(number !=0 ){
            int lastDigit = number %10;
            sum = sum + lastDigit;
            product = product * lastDigit;
            number = number / 10;
        }
        return (sum + product);
    }
    bool checkDivisibility(int n) {
    int result = digitSumAndProduct(n);

     if(n%result ==0){
        return true;
     }
     else{
        return false;
     }
        
    }
};