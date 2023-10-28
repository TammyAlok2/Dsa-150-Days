//link:https://leetcode.com/problems/count-vowels-permutation/submissions/
class Solution {
public:
    int countVowelPermutation(int n) {
        
        long long int a = 1, e = 1, i = 1, o = 1, u = 1, mod = 1e9 + 7;
        for (int k = 2; k <= n; k++) {
            long long int ta = a, ti = i, te = e, to = o, tu = u;
            a = te;
            e = ta + ti;
            i = ta + te + to + tu;
            o = ti + tu;
            u = ta;
            
            a %= mod;
            e %= mod;
            i %= mod;
            o %= mod;
            u %= mod;
        }
        return (a + e + i + o + u) % mod;
        
    }
};
