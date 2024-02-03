#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    int t, ans;
    cin >> t;
    char c;
    while (t--)
    {
        ans = 0;
        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> c;
                if (c == 'X')
                {
                    if (j < i || j > (10 - i + 1))
                    {
                        if (j < i)
                            ans += j;
                        else
                            ans += 10 - j + 1;
                    }
                    else
                        ans += i;
                }
            }
        }
        // again running the loop for last 4 lines
        for (int i = 4; i >= 1; i--)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> c;
                if (c == 'X')
                {
                    if (j < i || j > (10 - i + 1))
                    {
                        if (j < i)
                            ans += j;
                        else
                            ans += 10 - j + 1;
                    }
                    else
                        ans += i;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}