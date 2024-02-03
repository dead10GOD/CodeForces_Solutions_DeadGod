#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int min(int a, int b) { return (a > b) ? b : a; }
int main()
{
    int t, n, less, ele, flag, count0;
    lli ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        flag = count0 = 0;
        ans = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> ele;
            if (ele == 0)
                count0++;
            else
                ans *= ele; // multiplied only when element is non zero
            if (flag == 0)
            {
                less = ele; // asssigning the first element
                flag = 1;
            }
            less = min(less, ele);
        }
        if (count0 > 1) // if more than one zero than max product will always be 0
            cout << 0 << endl;
        else if (count0 == 1)
            cout << ans << endl; // beacuse we have taken the products by skipping 0 if
        else                     // we shall increase the lesser number always . Understand by taking examples
            cout << (ans / less) * (less + 1) << endl;
    }
}