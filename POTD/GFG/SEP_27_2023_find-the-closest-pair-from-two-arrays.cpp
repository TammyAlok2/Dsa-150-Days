//link: https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1
class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
             int i = 0,j = m-1;
        int a1, b1, clsum  = INT_MAX;
        while(i<n && j>=0){
            if(abs(x-arr[i]-brr[j])<abs(x-clsum)){
                a1 = arr[i], b1 = brr[j];
                clsum = a1+b1;
            }
            if( arr[i]+brr[j]>x)j--;
            else if( arr[i]+brr[j]<x)i++;
            else{return {arr[i], brr[j]};}
        }
        return {a1, b1};
    }
};