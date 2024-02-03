#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
// lli max(lli a, lli b) { return (a > b) ? a : b; }
// lli min(lli a, lli b) { return (b > a) ? a : b; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        int a = n % x;
        cout << n - a + (a < y) ? y - x : y;
    }
    return 0;
}