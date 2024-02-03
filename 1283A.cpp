#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    lli t, h, m, ans;
    cin >> t;
    while (t--)
    {
        cin >> h >> m;
        ans = (23 - h) * 60 + 60 - m;
        cout << ans << endl;
    }
    return 0;
}