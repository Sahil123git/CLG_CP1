#include <bits/stdc++.h>
using namespace std;

void fndFact(vector<int> &factArr)
{
    // cout << factArr[0]<<" vfgh " <<endl;
    for (int i = 2; i < 14; i++)
    {
        factArr[i] = i * factArr[i - 1];
    }
}
vector<int> FactDigit(int N)
{
    int i = 1;
    vector<int> factArr(14, 1);
    fndFact(factArr);
    vector<int> res;
    // for(int i = 1; i < 14; i++) {
    //     cout << factArr[i]<<" ";
    // }
    while (true)
    {
        long long num = i, sum = 0;
        vector<int> vc;
        // cout << i << endl;
        while (num != 0)
        {
            sum += factArr[num % 10];
            vc.push_back(num % 10);
            num = num / 10;
        }
        if (sum == N)
        {
            reverse(vc.begin(), vc.end());
            res = vc;
            break;
        }
        i++;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vc = FactDigit(n);
    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i];
    }
}

/*vector<int> FactDigit(int N)
 {
     vector<int> v(10), result;
     v[0] = 1;
     for(int i = 1; i <= 9; i++) {
         v[i] = i * v[i - 1];
     }

     for(int i = 9; i >= 1; i--) {
         if(v[i] <= N) {
             result.push_back(i);
             N -= v[i];
             i++;
         }
     }
     sort(result.begin(), result.end());
     return result;

 }*/