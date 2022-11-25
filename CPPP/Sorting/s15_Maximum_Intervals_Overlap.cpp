#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &inter)
{

	sort(inter.begin(), inter.end());
	vector<int> in = {inter[0][0], inter[0][1]};
	vector<vector<int>> ans;

	// for(int i=0;i<inter.size();i++){
	//     for(int j=0;j<inter[i].size();j++){
	//         cout<<inter[i][j]<<" ";
	//     }
	//     cout<<endl;
	// }
	for (int i = 0; i < inter.size(); i++)
	{
		if (in[1] >= inter[i][0])
		{ // if saved interval last ele is greater than 1st ele of cur ind ele
			in[1] = max(inter[i][1], in[1]);
		}
		else
		{						  // if saved interval last ele is also smaller
			ans.emplace_back(in); // inserting prev interval
			in[0] = inter[i][0];
			in[1] = max(inter[i][1], in[1]);
		}
	}
	ans.emplace_back(in); // inserting last interval
	return ans;
}
// Driver code
int main()
{
	vector<int> start = {13, 28, 29, 14, 40, 17, 3},
				end = {107, 95, 111, 105, 70, 127, 74};

	vector<vector<int>> vc{{1, 3}, {2, 6}, {8, 10}, {15, 18}};

	vector<vector<int>> res = merge(vc);
	for (auto it : res)
	{
		for (auto iit : it)
		{
			cout << iit << " ";
		}
		cout << endl;
	}

	return 0;
}
