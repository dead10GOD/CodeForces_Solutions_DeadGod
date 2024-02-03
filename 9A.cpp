#include "bits/stdc++.h"
using namespace std;
int main()
{
    int y, w, a, b;
    cin >> y >> w;
    // reusing variable y to catch the largest no. of y and w
    y = (y > w) ? y : w;
    if (y > 6)
    {
        cout << "0/1";
        return 0;
    }
    a = 6 - y + 1;
    // it can be seen that since y and k are gentlemen , the probablilty 0 is not possible

    b = 6; // default case

    if (a == 6)
    {
        a = 1;
        b = 1;
    }
    else if (a % 2 == 0) // possible a are 2 4 , coz 0 is not possible, and 6 has been covered in first if
    {
        a /= 2;
        b /= 2;
    }
    else if (a == 3)
    {
        a = 1;
        b = 2;
    }
    // remain are a=1 and a=5
    cout << a << "/" << b;
    return 0;
}