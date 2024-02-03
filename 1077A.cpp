#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
lli max(lli a, lli b) { return (a > b) ? a : b; }
lli min(lli a, lli b) { return (b > a) ? a : b; }
int main()
{
    int t;
    lli a, b, k, ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> k;
        ans = 0;
        ans += a * ((k + 1) / 2);
        ans -= b * (k / 2);
        cout << ans << endl;
    }
    return 0;
}