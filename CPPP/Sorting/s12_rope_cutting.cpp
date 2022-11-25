#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

/* The main function that returns the max possible product */
vector<int> RopeCutting(int arr[], int n)
{
	sort(arr, arr + n);
	int cnt = 1, len = n;
	vector<int> res;

	for (int i = 0; i < n - 1; i++)
	{ // not taking lst val bec after subtracting tht val there will be no val remaining
		if (arr[i] == arr[i + 1])
		{
			//   cout <<"he";
			cnt++;
		}
		else
		{
			res.push_back(len - cnt);
			len = len - cnt;
			cnt = 1;
		}
	}

	return res;
}

/* Driver program to test above functions */
int main()
{
	int n;
	cin >> n;

	int arr[n] = {5, 1, 1, 2, 3, 5};
	vector<int> vc = RopeCutting(arr, n);

	for (auto it : vc)
	{
		cout << it << " ";
	}
	return 0;
}
