// User function Template for C++
class Solution
{
public:
    bool chkPrime(int num)
    {
        if (num == 1)
        {
            return 0;
        }

        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }

    long long nthMysterious(long long N)
    {
        int cnt = 0, num = 2;
        while (cnt != N)
        {
            if (chkPrime(num))
            {
                cnt++;
            }
            num++;
        }

        return ((num - 1) * (num - 1)) + 1;
    }
};