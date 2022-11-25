#include <bits/stdc++.h>
using namespace std;

int chkNum(int num)
{
    if (num == 1 || num == 7 || num == 10)
    { // base for true condn
        return 1;
    }
    if (num <= 10)
        return 0; // base case for false condn

    int newNum = 0;
    while (num != 0)
    { // extracting every digits of a num
        newNum += ((num % 10) * (num % 10));
        num = num / 10;
    }

    return chkNum(newNum);
}
int nextHappy(int N)
{
    N++;
    while (!(chkNum(N)))
    { // stop if found a Happy Num
        N++;
    }
    return N;
}

int main()
{
    int n;
    cin >> n;

    cout << nextHappy(n);
}