#include <iostream>
using namespace std;
int main()
{
    int n, num, large = -1;
    long maxINT = 10000000, sum = 0; // since the max entry can be 10^6 hence we have taken 10^7
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num >= large)
            large = num;
        sum = sum + maxINT - num;
    }
    cout << sum - n * maxINT + n * large; // worked out this formula
    return 0;
}