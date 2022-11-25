#include <bits/stdc++.h>
using namespace std;

void Sum(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &r, int i)
{

    if (target == 0)
    {
        // if we get exact answer
        res.push_back(r);
        return;
    }

    while (i < candidates.size() && target - candidates[i] >= 0)
    {
        // Till every element in the array starting
        // from i which can contribute to the target
        r.push_back(candidates[i]); // add them to vector

        // recur for next numbers
        Sum(candidates, target - candidates[i], res, r, i);
        ++i;

        // Remove number from vector (backtracking)
        r.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end()); // sort candidates array

    // remove duplicates
    candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

    vector<int> r;
    vector<vector<int>> res;

    Sum(candidates, target, res, r, 0);

    return res;
}
int main()
{
    int n;
    cin >> n;

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        res.push_back(ele);
    }

    vector<vector<int>> res1 = combinationSum(res, n);

    for (auto it : res1)
    {
        for (auto itt : it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}