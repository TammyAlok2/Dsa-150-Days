class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
          return is_sorted(arr,arr+N);
    }
};
