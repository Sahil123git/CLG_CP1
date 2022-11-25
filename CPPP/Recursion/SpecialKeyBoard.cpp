// C++ solution

// O(N^2) time and O(N) space

// Dynamic Programming
#include <bits/stdc++.h>
using namespace std;

long long int optimalKeys(int N)
{
    vector<long long> dp(N + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= N; i++)
    {
        dp[i] = i;
        for (int j = i - 3; j >= 1; j--)
        {
            dp[i] = max(dp[i], dp[j] + dp[j] * (i - (j + 2)));
        }
    }
    return dp[N];
}
int main()
{
    int n;
    cin >> n;
    cout << optimalKeys(n);
}