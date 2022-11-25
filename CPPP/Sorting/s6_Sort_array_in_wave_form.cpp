// A C++ program to sort an array in wave form using
// a sorting function
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// A utility method to swap two numbers.
void convertToWave(vector<int> &arr, int n)
{
	sort(arr.begin(), arr.end());
	for (int i = 0; i + 1 < n; i += 2)
	{
		swap(arr[i], arr[i + 1]);
	}
}

// Driver program to test above function
int main()
{
	vector<int> arr{10, 90, 49, 2, 1, 5, 23};
	int n = arr.size();
	convertToWave(arr, n);
	
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
