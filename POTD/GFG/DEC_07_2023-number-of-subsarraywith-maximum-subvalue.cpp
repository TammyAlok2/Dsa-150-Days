class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
       long long start=0,end=0,result=0,temp=0;
       for(long long end=0;end<n;end++) {
           if(a[end]>=L && a[end]<=R) {
               temp = end-start+1;
           }
           if(a[end]>R) {
               temp=0;
               start = end+1;
           }
           result = result + temp;
       }
        return result;
        
    }
};
