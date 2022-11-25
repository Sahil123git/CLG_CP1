

class Solution
{

public:
    void precompute()
    {
    }
    bool chkrPrime(long long n)
    {
        if (n <= 1)
        {
            return 0;
        }
        if (n <= 3)
        {
            return 1;
        }

        if (n % 2 == 0 || n % 3 == 0)
        {
            return 0;
        }
        for (long long i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    long long primorial(long long n)
    {
        long long prod = 1;
        for (long long i = 2; i <= n; i++)
        {
            if (chkrPrime(i))
            {
                prod = (prod * i) % (1000000007);
            }
        }
        return prod;
    }
};