class Solution
{
public:
    bool isPrime(int n)
    {
        if (n == 1)
            return false;
        if (n == 2 || n == 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i <= sqrt(n); i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }
    int minThirdPiles(int A, int B)
    {
        for (int k = 1; k < 10000; k++)
        {
            int sum = A + B + k;
            if (isPrime(sum))
                return k;
        }
    }
};