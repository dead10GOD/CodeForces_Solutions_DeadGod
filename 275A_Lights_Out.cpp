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
    int a[5][5] = {0};
    REP(i, 1, 3)
    REP(j, 1, 3)
    cin >> a[i][j];
    int sum;
    REP(i, 1, 3)
    {
        REP(j, 1, 3)
        {
            sum = (a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) & 1;
            if (sum)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
    return 0;
}
