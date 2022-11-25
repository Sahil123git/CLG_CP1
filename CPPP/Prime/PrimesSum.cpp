// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

string chkPrime(int n)
{
    if (n <= 1)
        return "No";
    if (n <= 3)
        return "Yes";

    if (n % 2 == 0 || n % 3 == 0)
        return "No";

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return "No";
    }
    return "Yes";
}
string isSumOfTwo(int N)
{
    // code here
    // cout << chkPrime(27) <<endl;
    if (N & 1)
        return chkPrime(N - 2); // if odd num then always 1 num be 2
    else
        return "Yes"; // if num is even it can be always be sum of 2 prime num
}
