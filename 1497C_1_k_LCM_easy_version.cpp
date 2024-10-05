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
    int n, k;
    cin >> n >> k;
    if (n & 1)
        cout << n / 2 << " " << n / 2 << " " << 1 << endl;
    else
    {
        if (n / 2 % 2 == 0)
            cout << n / 2 << " " << n / 4 << " " <<n/ 4 << endl;
        else
            cout << n / 2 -1 << " " << n / 2-1 << " " << 2 << endl;
    }
}
signed main()
{
    FAST_IO
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}