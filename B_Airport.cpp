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
    int n, m;
    cin >> n >> m;
    int a[m], ar[m];
    REP(i, 0, m - 1)
    {
        cin >> a[i];
        ar[i] = a[i];
    }
    sort(a, a + m);
    sort(ar, ar + m);
    int mx = 0, mn = 0;
    int prev = m - 2, curr = m - 1;
    while (n > 0)
    {
        mx += ar[curr]--;
        n--;
        if (ar[curr] >= ar[prev])
        {
            if (curr != m - 1)
            {
                curr++;
                prev++;
            }
            continue;
        }
        else if (ar[curr] < ar[prev])
        {
            curr = prev;
            prev--;
        }
    }
    cout << mx;
    return 0;
}