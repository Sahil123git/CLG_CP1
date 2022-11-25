#include <bits/stdc++.h>
using namespace std;

int call_knap(int n, int cpty, vector<vector<int>> &dp_arr, int *val, int *wt)
{
    if (n == 0 || cpty == 0) // same code only do n-1 when not picking any ele
    {
        return 0;
    }
    else if (dp_arr[n][cpty] != -1)
    {
        return dp_arr[n][cpty];
    }

    else if (cpty >= wt[n - 1]) // In this when we are picking any ele then we will not do n-1 but when we are not pickng any ele then
    {                           // we will do n-1 becoz we can't add this ele again.
        return dp_arr[n][cpty] = max(val[n - 1] + call_knap(n, cpty - wt[n - 1], dp_arr, val, wt), call_knap(n - 1, cpty, dp_arr, val, wt));
    }
    else // this is again not pickng case so we'll do n-1
    {
        return dp_arr[n][cpty] = call_knap(n - 1, cpty, dp_arr, val, wt);
    }
}
int knapSack(int N, int W, int val[], int wt[])
{
    // code here
    vector<vector<int>> dp_arr(N + 1, vector<int>(W + 1, -1));
    return call_knap(N, W, dp_arr, val, wt);
}

int main()
{
    int n;
    cin >> n;
    int w;
    cin >> w;

    int val[n] = {1, 4, 5, 7}, wt[n] = {1, 3, 4, 5};
    cout << knapSack(n, w, val, wt);
}