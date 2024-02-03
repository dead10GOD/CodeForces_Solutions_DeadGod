#include <iostream>
using namespace std;
int main()
{
    int a, b, large, small;
    cin >> a >> b;
    small = (a < b) ? a : b;
    large = (a > b) ? a : b;

    cout << small<<" ";
    large =large - small;
    cout << large / 2;
    return 0;
}