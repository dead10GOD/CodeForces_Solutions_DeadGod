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
void solve(int &n)
{
    int c3 = 0, c2 = 0,cnt=0;
    while(n%6==0)
    {
        cnt++;
        n/=6;
    }
    while (n % 3 == 0)
    {
        c3++;
        n /= 3;
    }
    // while (n % 2 == 0)
    // {
    //     c2++;
    //     n /= 2;
    // }
    if (n!=1)
        cout << -1 << "\n";
    else
        cout << cnt + 2*c3 << "\n";
}
signed main()
{
    FAST_IO
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        solve(n);
    }
    return 0;
}