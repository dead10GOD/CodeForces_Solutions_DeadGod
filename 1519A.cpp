#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
lli max(lli a, lli b) { return (a > b) ? a : b; }
lli min(lli a, lli b) { return (b > a) ? a : b; }
inline bool check(lli a, lli b) { return (a <= b); }
int main()
{
    int t;
    lli r, b, d, ans, less, large;
    cin >> t;
    while (t--)
    {
        cin >> r >> b >> d;
        less = min(r, b);
        large = max(r, b);
        if (large % less == 0)
            ans = large / less;
        else
            ans = large / less + 1;
        if (check(ans - 1, d))
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}