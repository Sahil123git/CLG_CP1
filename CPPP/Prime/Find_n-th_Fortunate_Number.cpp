
class Solution
{
public:
    bool chkPrime(long long n) // sqrt(n)
    {
        if (n <= 1)
        {
            return 0;
        }
        else if (n <= 3)
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

    long long nthFortunateNum(int n)
    {
        long long st = 2, cnt = 0, prod = 1;
        while (cnt < n)
        {
            if (chkPrime(st))
            {
                // cout << st<<" ";
                prod *= st;
                cnt++;
            }
            st++;
        }
        st = 2;
        long long endPrime;

        while (true)
        {
            if (chkPrime(st + prod)) // n sqrt(n)
            {
                endPrime = st;
                break;
            }
            st++;
        }
        // cout << prod << endl;
        return st;
    }
};