class Solution
{
public:
    long long int sumXOR(int arr[], int n)
    {
        long long int res = 0;
        for (int i = 0; i < 32; i++)
        {
            long long int IndvSum = 0;
            long long cnt0 = 0, cnt1 = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 == 0)
                    cnt0++;
                else
                    cnt1++;
                arr[j] /= 2; // is keeps updating given array [1 2 1 2 1]-> [0 1 0 1 0]-> and so on ...
            }
            IndvSum = cnt1 * cnt0 * (1 << i); // storing sum of every iteration ex=i0,i=1,i=2...
            res += IndvSum;
        }
        return res;
    }
};
