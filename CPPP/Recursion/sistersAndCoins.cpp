#include <bits/stdc++.h>
using namespace std;
int chkRecur(int arr[], int m, int ind, int sum)
{
    if (sum == m)
    {
        return 1;
    }
    if (ind < 0 || sum < m)
    {
        return 0;
    }
    return (chkRecur(arr, m + arr[ind], ind - 1, sum - arr[ind]) || chkRecur(arr, m, ind - 1, sum));
}

int sisterCoin(int arr[], int n, int m)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return chkRecur(arr, m, n - 1, sum);
}
int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sisterCoin(arr, n, m);
}