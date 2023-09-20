#include<iostream>
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        
        // Your code here
            int c=0;
        while(n>0){
            if(n%2==1){
                return c+1;
            }
            n/=2;
            c++;
        }
        return 0;
    }
};