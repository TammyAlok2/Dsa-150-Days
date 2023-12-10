class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
             int sum =0;
        map <int, int> mpp;
        mpp[0]=1;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            mpp[sum]++;
            if(mpp[sum]>1)return 1;
        } return 0;
    }
};
