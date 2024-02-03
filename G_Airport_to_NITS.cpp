#include "bits/stdc++.h"
using namespace std;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, s;
    cin >> n >> k >> s;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int ans = 0;
    int i = 0;
    s = min(s, n / k);
    while (i < n)
    {
        ans = max(ans, a[i + s - 1] - a[i]);
        i = i + s;
    }
    cout << ans << endl;
    return 0;
}