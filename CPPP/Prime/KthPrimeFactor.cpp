// User function Template for C++

class Solution
{
public:
    int kthPrime(int n, int k)
    {
        int cnt = 1;

        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                if (cnt == k)
                {
                    return i;
                }
                cnt++;
                n = n / i;
            }
        }
        if (n > 1)
        {
            if (cnt == k)
            {
                return n;
            }
        }
        return -1;
    }
};