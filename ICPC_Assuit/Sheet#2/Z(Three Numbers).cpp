#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define endl '\n'
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int z, k, s;
    cin>>k>>s;
    int ans = 0;
    REP(x, 0, k)
    REP(y, 0, k)
    {
        z = s - x - y;
        if (z>=0 && z <= k)
            ans++;
    }
    cout << ans;

    return 0;
}