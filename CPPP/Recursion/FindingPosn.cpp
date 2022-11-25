#include <bits/stdc++.h>
using namespace std;

long long int solve(long long int n)
{
    if (n == 1)
        return 0;

    return 1 + solve(n / 2);
}
long long int nthPosition(long long int n)
{
    // code here
    if (n == 1)
        return 1;

    long long int ans = pow(2, solve(n));
    return ans;
}
int main()
{
    int n;
    cin >> n;

    cout << nthPosition(n);
}
/*Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)*/