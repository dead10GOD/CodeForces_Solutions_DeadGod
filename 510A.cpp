#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
lli max(lli a, lli b) { return (a > b) ? a : b; }
lli min(lli a, lli b) { return (b > a) ? a : b; }
int main()
{
    int n, m, toggle = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            for (int j = 1; j <= m; j++)
                cout << '#';
            cout << "\n";
        }
        else if (toggle == 0)
        {
            toggle = 1;
            for (int j = 1; j < m; j++)
                cout << '.';
            cout << "#\n";
        }
        else if (toggle == 1)
        {
            toggle = 0;
            cout << "#";
            for (int j = 1; j < m; j++)
                cout << '.';
            cout << "\n";
        }
    }

    return 0;
}