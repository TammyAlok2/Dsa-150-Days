class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;   // base case

        double half = myPow(x, n / 2); // divide problem in half

        if (n % 2 == 0)
            return half * half; // if n even
        else if (n > 0)
            return x * half * half; // if n odd positive
        else
            return (half * half) / x; // if n negative
    }
};
