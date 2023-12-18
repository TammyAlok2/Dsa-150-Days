class Solution {
  public:
   int gameOfXor(int N , int A[]) {
       int result = 0;

    for (int i = 0; i < N; i++) {
        int frequency = (i + 1) * (N - i);
        if (frequency % 2 == 1) {
            result ^= A[i];
        }
    }
        return result;
}

};
