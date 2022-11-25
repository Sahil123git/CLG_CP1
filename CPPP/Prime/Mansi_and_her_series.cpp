// User function Template for C++
class Solution
{
public:
    bool primeChk(int num)
    {
        if (num <= 1)
        {
            return 0;
        }

        if (num <= 3)
        {
            return 1;
        }

        if (num % 2 == 0 || num % 3 == 0)
        {
            return 0;
        }

        for (int i = 5; i * i <= num; i += 6)
        {
            if (num % i == 0 || num % (i + 2) == 0)
            {
                return 0;
            }
        }

        return 1;
    }

    int nthTerm(int n)
    {
        int i = 0, num;
        for (int chk = 2; i < n; chk++)
        {
            if (primeChk(chk))
            {
                num = chk;
                i++;
            }
        }
        // cout << num << endl;
        return (num + 1) * n; // (nth Prime + 1) * n
    }
};