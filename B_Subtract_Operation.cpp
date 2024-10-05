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
    int T, n, k;
    int a[n];
    int mn, mx;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                mx = a[0];
                mn = a[0];
                continue;
            }
            mx = (mx < a[i]) ? a[i] : mx;
            mn = (mn > a[i]) ? a[i] : mn;
        }
        if (mx - mn == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}