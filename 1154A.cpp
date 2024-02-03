#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, x4, max;
    cin >> x1 >> x2 >> x3 >> x4;
    max = ((x1 > x2 ? x1 : x2) > (x3 > x4 ? x3 : x4)) ? (x1 > x2 ? x1 : x2) : (x3 > x4 ? x3 : x4);
    if (max != x1)

        cout << max - x1 << " ";

    if (max != x2)

        cout << max - x2 << " ";

    if (max != x3)

        cout << max - x3 << " ";

    if (max != x4)

        cout << max - x4 << " ";

    return 0;
}