// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;
#define ppi pair<int, int>
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first < b.first)
	{				 // freq smaller then no swap
		return true; // true means no swapping
	}
	else if (a.first > b.first)
	{
		return false; // false means swapping
	}
	else
	{ // if(a.first == b.first) {
		if (a.second < b.second)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return true; // will not be used
}

vector<int> frequencySort(vector<int> &nums)
{
	unordered_map<int, int> ump;
	for (auto it : nums)
	{
		ump[it]++;
	}

	vector<pair<int, int>> vc;
	for (auto it : ump)
	{
		vc.push_back({it.second, it.first}); // pair of freq and ele
	}

	sort(vc.begin(), vc.end(), cmp);

	// for(auto it:vc) {
	//     cout << it.second<<" "<<it.first<<endl;
	// }
	// cout << endl;
	vector<int> res;
	for (int i = 0; i < vc.size(); i++)
	{
		for (int j = 0; j < ump[vc[i].second]; j++)
		{
			res.push_back(vc[i].second);
		}
	}
	return res;
}

// Driver code
int main()
{
	vector<int> vec{2, 5, 2, 8, 5, 6, 8, 8};
	int n = vec.size();

	// Function call
	vector<int> res = frequencySort(vec);

	for (int i = 0; i < n; i++)
		cout << res[i] << " ";
	cout << "\n";
	return 0;
}
