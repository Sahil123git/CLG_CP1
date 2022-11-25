#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    // if the physics marks are not same, sort them in increasing order
    if (a.first != b.first)
        return a.first < b.first;

    // if physics marks are same
    else
    {
        // if chem marks are not same, sort them in decreasing order
        if (a.second.first != b.second.first)
            return a.second.first > b.second.first;

        // if both physics and chemistry marks are same,
        // sort in the increasing order of math marks
        else
            return a.second.second < b.second.second;
    }
}

void customSort(int phy[], int chem[], int math[], int n)
{
    vector<pair<int, pair<int, int>>> arr(n);

    // storing the marks of all 3 subjects of a student together
    for (int i = 0; i < n; ++i)
    {
        arr[i].first = phy[i];
        arr[i].second.first = chem[i];
        arr[i].second.second = math[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    // updating the original arrays with the new order
    for (int i = 0; i < n; ++i)
    {
        phy[i] = arr[i].first;
        chem[i] = arr[i].second.first;
        math[i] = arr[i].second.second;
    }
}
int main()
{
    int n = 10;
    int phy[] = {4, 1, 10, 4, 4, 4, 1, 10, 1, 10}, chem[] = {5, 2, 9, 6, 3, 10, 2, 9, 14, 10};
    int math[] = {12, 3, 6, 5, 2, 10, 16, 32, 10, 4};

    customSort(phy, chem, math, 10);

    for (int i = 0; i < n; i++)
    {
        cout << phy[i] << " " << chem[i] << " " << math[i] << endl;
    }
}