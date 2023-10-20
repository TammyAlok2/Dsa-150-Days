//link:https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
         long long int sum = 0;
        for(int i=0;i<N;i++){
            sum = arr[i]+sum;
        }
        if(sum%3==0){
            return 1;
            
        }
        else{
            return 0;
        }
    }
};
