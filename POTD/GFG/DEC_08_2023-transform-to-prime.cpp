class Solution
{
    public:
     int minNumber(int arr[],int N)
    {
        int ele = 0;
        int sum =0;
        for(int i =0;i<N;i++){
            sum+=arr[i];
        }
        if(sum==1){
            return 1;
        }
        
        while(1){
            int x = sum;
            int f=0;
            for(int i = 2;i<=sqrt(sum);i++){
                if(sum%i==0){
                    f=1;
                    break;
                }
            }
            if(f==0){
                return ele;
            }
            ele++;
            sum+=1;
        }
    }
};
