#include <iostream>
#include <string>
using namespace std;
bool isPrime(int num)
{
    if (num < 2 || num % 2 == 0)
        return num == 2;
    for (int i = 3; i * i <= num; i += 2)
        if (num % i == 0)
            return false;
    return true;
}

int primePalindrome(int N)
{
    // if(8<=N<=11) return 11
    if (8 <= N && N <= 11)
        return 11;

    // generate odd length palindrome number
    // which will cover given constraint.
    for (int x = 1; x < 100000; ++x)
    {

        string s = to_string(x), r(s.rbegin(), s.rend());
        int y = stoi(s + r.substr(1));

        // if y>=N and it is a prime number
        // then return it.
        if (y >= N && isPrime(y))
            return y;
    }

    return -1;
}

// Driver code
int main()
{
    cout << primePalindrome(112);
    return 0;
}