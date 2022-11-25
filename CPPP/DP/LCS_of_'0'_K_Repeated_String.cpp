#include <bits/stdc++.h>
using namespace std;

int lcsK(int k, string st)
{
    int count = 0, maxi = INT_MIN;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '0')
            count++;
        else
            count = 0;
        maxi = max(maxi, count);
    }
    if (maxi == st.size())
        return (k * maxi);
    if (k > 1)
    {
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '0')
                count++;
            else
                break;
            maxi = max(maxi, count);
        }
    }
    return maxi;
}
int main()
{
    cout << lcsK(4, "010101");
}