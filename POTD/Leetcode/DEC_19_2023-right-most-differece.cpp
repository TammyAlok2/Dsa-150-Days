class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m == n)return -1;
        int count=1 ;
        int x = m&1;
          int y = n&1;
        while(x^y==0){
            m = m>>1;
               x = m&1;
             n = n>>1;
               y = n&1;
            count++;
        }
        return count;
    }
};
