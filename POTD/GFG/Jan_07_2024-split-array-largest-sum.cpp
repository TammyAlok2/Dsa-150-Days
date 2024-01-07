class Solution {
  public:
   bool isPossible(int arr[],int k , int minSol,int n){
      int subSum = 0;
      int cnt = 1;
      for(int idx = 0; idx < n; idx++){
          if(arr[idx] > minSol)
           return false;
          
          if(arr[idx] + subSum > minSol){
              cnt++;
              subSum = arr[idx];
              if(cnt > k)
               return false;
          }
          else
           subSum += arr[idx];
      }
      return true;
  }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int start = 0,end = accumulate(arr,arr+N,0);
        int ans;
        while(start <= end){
            int mid = (start + end) >> 1;
            if(isPossible(arr,K,mid,N)){
                ans = mid;
                end = mid -1;
            }
            else
             start = mid + 1;
        }
        return ans;
    }
};
