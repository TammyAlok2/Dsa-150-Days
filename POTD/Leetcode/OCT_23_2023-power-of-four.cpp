https://leetcode.com/problems/power-of-four/submissions/

class Solution {
public:
bool isPowerOfFour(int n) {
    // If 'n' is 1, it is a power of four
    if (n == 1)
        return 1; // True in C is often represented as 1

    // If 'n' is non-positive, it cannot be a power of four
    if (n <= 0)
        return 0; // False in C is often represented as 0

    // Calculate the logarithm of 'n' with base 4
    double logarithmBase4 = log(n) / log(4);

    // Check if the result of the logarithmic operation is an integer
    return (logarithmBase4 == (int)logarithmBase4);
}
};
