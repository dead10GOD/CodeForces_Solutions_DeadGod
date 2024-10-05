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
void solve()
{
    int n, m;
    cin >> n;
    int a[n];
    REP(i, 0, n - 1)
    cin >> a[i];
    cin >> m;
    int b[m];
    REP(j, 0, m - 1)
    cin >> b[j];
    int mx = -1, c = 0, prev = mx;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            {
            if (b[j] % a[i] == 0)
                prev = mx;
                int r = b[j] / a[i];
                mx = max(mx,r);
                if (mx == prev)
                    c++;
                else
                    c = 1;
            }
    cout << c << endl;
}
signed main()
{
    FAST_IO
    solve();
    return 0;
}