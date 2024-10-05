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
    int c = 0, a[4];
    int s1, s2, s3, s4;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    for (int i = 1; i < 4; i++)
        if (a[i] == a[i - 1])
            c++;
    cout << c  << endl;
}
signed main()
{
    FAST_IO
    solve();
    return 0;
}