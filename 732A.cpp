#include <iostream>
using namespace std;
int main()
{
    int r, k, i;
    cin >> k >> r;
    for (i = 1; i < 10; i++)
    {
        if ((i * k - r) % 10 == 0 || i * k % 10 == 0)
        {
            cout << i << endl;
            break;
        }
    }
    if (i != 10)
        cout << 1;

    // if ((k - r) % 10 == 0 || k % 10 == 0)
    // {
    //     cout << 1 << endl;
    // }
    // else if ((2 * k - r) % 10 == 0 || 2*k % 10 == 0)
    // {
    //     cout << 2 << endl;
    // }
    // else if ((3 * k - r) % 10 == 0 || 3*k % 10 == 0)
    // {
    //     cout << 3 << endl;
    // }
    // else if ((4 * k - r) % 10 == 0 || 4*k % 10 == 0)
    // {
    //     cout << 4 << endl;
    // }
    // else if ((5 * k - r) % 10 == 0 || 5*k % 10 == 0)
    // {
    //     cout << 5 << endl;
    // }
    // else if ((6 * k - r) % 10 == 0 || 6*k % 10 == 0)
    // {
    //     cout << 6 << endl;
    // }
    // else if ((7 * k - r) % 10 == 0 || 7*k % 10 == 0)
    // {
    //     cout << 7 << endl;
    // }
    // else if ((8 * k - r) % 10 == 0 || 8*k % 10 == 0)
    // {
    //     cout << 8 << endl;
    // }
    // else if ((9 * k - r) % 10 == 0 || 9*k % 10 == 0)
    // {
    //     cout << 9 << endl;
    // }
    // else //
    //     cout << 1 << endl;

    return 0;
}