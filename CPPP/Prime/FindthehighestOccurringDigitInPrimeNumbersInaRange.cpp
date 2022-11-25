// User function Template for C++
class Solution
{
public:
    bool chkPrime(int num)
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

    int maxDigit(int L, int R)
    {
        vector<int> hshArr(10);
        bool chk = 0;
        for (int i = L; i <= R; i++)
        {
            if (chkPrime(i))
            {
                int num = i, rev = 0, rem;
                while (num != 0)
                {
                    rem = num % 10;
                    hshArr[rem] += 1; // saving freq in hshArr
                    num = num / 10;
                }
                chk = 1;
            }
        }

        if (chk == 0)
        { // if no prime was there
            return -1;
        }
        int maxi = 0, ele = -1;

        for (int i = 0; i < 10; i++)
        {
            if (hshArr[i] > maxi)
            {
                maxi = hshArr[i];
                ele = i;
            }
            else if (hshArr[i] == maxi && i > ele)
            { // handling equals case
                ele = i;
            }
        }

        return ele;
    }
};