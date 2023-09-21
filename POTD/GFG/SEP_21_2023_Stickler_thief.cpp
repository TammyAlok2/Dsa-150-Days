#include<iostream>
using namespace std; 
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
            int sum=0,pro=arr[0];
        for (int i=1 ; i<n ;i++){
            int inc =sum+arr[i];
            int con = pro;
            int ans = max(inc ,con);
            sum = pro;
            pro = ans;
        }
        return pro;
    }
};
