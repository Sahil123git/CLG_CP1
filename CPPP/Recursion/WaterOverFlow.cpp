#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, i, j;
        cin >> k >> i >> j;
        float dp[i + 1][i + 2];
        memset(dp, 0, sizeof(dp));
        dp[1][1] = k;
        for (int x = 1; x <= i; x++)
        {
            for (int y = 1; y <= x; y++)
            {
                if (dp[x][y] > 1)
                {
                    float diff = dp[x][y] - 1;
                    dp[x][y] = 1;
                    dp[x + 1][y] += diff / 2;
                    dp[x + 1][y + 1] += diff / 2;
                }
            }
        }
        cout << dp[i][j] << endl;
    }
}
