// C++ program to find
// minimum number of swaps
// required to sort an array
#include <bits/stdc++.h>

using namespace std;

// Function returns the
// minimum number of swaps
// required to sort the array
int minSwaps(vector<int> &nums)

{

	// Code here

	int n = nums.size();

	vector<pair<int, int>> V;

	for (int i = 0; i < n; i++)

	{

		V.push_back({nums[i], i});
	}

	sort(V.begin(), V.end());

	int count_swap = 0;

	for (int i = 0; i < n; i++)

	{

		while (V[i].second != i)

		{

			count_swap++;

			swap(V[i], V[V[i].second]);
		}
	}

	return count_swap;
}

// Driver program to test the above function
int main()
{
	vector<int> vc{1, 5, 4, 3, 2};
	cout << minSwaps(vc);
	return 0;
}
