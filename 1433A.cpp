#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t, x, cnt;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> x;
        if (x % 10 > 1)
            cnt = (x % 10 - 1) * 10;
        for (int i = 1; x > 0; i++)
        {
            cnt += i;
            x /= 10;
        }
        cout<<cnt<<endl;
    }

    return 0;
}