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
    int n, k;
    cin >> n >> k;
    // if (5 * n * (n + 1) / 2 <= (240 - k))
    int ans = 0;
    if (240 - k < 5)
    {
        cout << 0;
        return 0;
    }
    int i;
    for (i = 1; i <= n; i++)
    {
        ans += 5 * i;
        if (ans >= 240 - k)
            break;
    }
    if (ans == 240 - k)
        cout << i;
    else if (i == n + 1)
        cout << n;
    else
        cout << i - 1;
    return 0;
}