#include <bits/stdc++.h>
using namespace std;

int minOperations(string str1, string str2)
{ // Aditya Verma DP concept
  //  Your code goes here
    vector<vector<int>> dpArr(str1.size() + 1, (vector<int>(str2.size() + 1, -1)));

    for (int i = 0; i <= str1.size(); i++)
    { // LCS code
        for (int j = 0; j <= str2.size(); j++)
        {

            if (i == 0 || j == 0)
            {
                dpArr[i][j] = 0;
            }

            else if (str1[i - 1] == str2[j - 1])
            {
                dpArr[i][j] = 1 + dpArr[i - 1][j - 1];
            }

            else
            {
                dpArr[i][j] = max(dpArr[i - 1][j], dpArr[i][j - 1]);
            }
        }
    }

    int lcs = dpArr[str1.size()][str2.size()]; // from str1 length subtract lcs len this will be deletion and from str2
    // len subtract lcs len this will be insertion
    return (str1.size() - lcs) + (str2.size() - lcs);
}

int main()
{
    cout << minOperations("ehad", "bed");
}