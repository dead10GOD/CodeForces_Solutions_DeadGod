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
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ele1, ele2, lSum = 0, rSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ele1 >> ele2;
        lSum += ele1;
        rSum += ele2;
    }
    int ans = min(lSum, n - lSum) + min(rSum, n - rSum);  // worked out formula
    cout << ans;

    return 0;
}