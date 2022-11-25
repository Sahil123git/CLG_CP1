class Solution
{
public:
    long long int primeProduct(int N)
    {
        vector<int> prmFctr;
        int res = 1;
        for (int i = 2; i * i <= N; i++)
        {
            bool chkr = 1;
            while (N % i == 0)
            {

                if (chkr == 1)
                { // to extract only unique num
                    prmFctr.push_back(i);
                    res *= i;
                    chkr = 0;
                }
                N = N / i;
            }
        }
        if (N > 1)
        {
            prmFctr.push_back(N);
            res *= N;
        }

        return res;
    }
};
/*Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)*/
    * /