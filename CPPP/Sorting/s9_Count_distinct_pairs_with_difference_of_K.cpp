#include <bits/stdc++.h>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
	unordered_map<int, int> ump;
	for (int i = 0; i < nums.size(); i++)
	{
		ump[nums[i]]++;
	}

	int cnt = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] - k == nums[i])
		{
			if (ump[nums[i] - k] > 1)
			{
				cnt++;
				ump[nums[i]] = 0;
			}
		}
		else if (ump[nums[i] - k] != 0)
		{
			cnt++;
			ump[nums[i] - k] = 0;
		}
	}
	return cnt;
}
int main()
{
	vector<int> vc{1, 5, 3, 4, 2};
	int n = vc.size();
	int k = 3;
	cout << "Count of pairs with given diff is "
		 << findPairs(vc, k);

	return 0;
}
