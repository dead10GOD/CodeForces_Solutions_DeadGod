#include "bits/stdc++.h"
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define int long long
#define pb push_back
#define endl '\n'
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define int long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
signed main()
{
    FAST_IO
    // end -start +1  - count
    int t, n, a, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vi v;
        int l = 0, r = 1e9+1, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> x;
            if (a == 1)
                l = max(l, x);
            else if (a == 2)
                r = min(r, x);
            else // if (a == 3)
                v.pb(x);
        }
        for (int i = 0; i < v.size(); i++)
            if (v[i] >= l && v[i] <= r)
                count++;
        int ans = r - l + 1 - count;
        if (r < l || ans < 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}