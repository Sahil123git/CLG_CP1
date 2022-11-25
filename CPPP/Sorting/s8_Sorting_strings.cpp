// C++ program to sort a string of characters
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

// function to print string in sorted order
void sortString(string &str)
{

	int charCount[MAX_CHAR] = {0};

	// Traverse string and increment
	// count of characters
	for (int i = 0; i < str.length(); i++)
		charCount[str[i] - 'a']++;
	for (int i = 0; i < MAX_CHAR; i++)
		for (int j = 0; j < charCount[i]; j++)
			cout << (char)('a' + i);
}
int main()
{
	string s = "geeksforgeeks";
	sortString(s);
	return 0;
}
