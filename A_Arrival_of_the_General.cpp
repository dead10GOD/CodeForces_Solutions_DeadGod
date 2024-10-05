#include "bits/stdc++.h"
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));
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
    int n, x;
    cin >> n;
    int mx, mn, imx=0, imn=0;
    REP(i, 0, n - 1)
    {
        cin >> x;
        if (i == 0)
        {
            mx = x;
            mn = x;
        }
        else
        {
            if (x > mx)
            {
                imx = i;
                mx = x;
            }
            if (x <= mn)
            {
                imn = i;
                mn = x;
            }
        }
    }
    // cout << imn << " " << imx << endl;
    int ans = n - 1 - imn + imx;
    if (imn < imx)
        cout << ans - 1;
    else
        cout << ans;

    return 0;
}