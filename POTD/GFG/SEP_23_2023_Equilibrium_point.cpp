//link: https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
          if(n==1){
            return 1;
        }
        if(n==0 || n==2){
            return -1;
        }
        int totalSum = 0;
        for(int i=0; i<n; i++){
            totalSum += a[i];
        }
        int leftSum = 0;
        for(int i=1;i<n;i++){
            int rightSum = 0;
            leftSum += a[i-1];
            rightSum = totalSum - leftSum -a[i];
            if(leftSum == rightSum){
                return i+1;
            }
        }
        return -1;
    }

};
