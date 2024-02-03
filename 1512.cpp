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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        REP(i, 0, n - 1)
        cin >> a[i];
        int dif = 0;
        //*Explicitly checking for the case when first element is different
        if (a[0] != a[1] && a[0] != a[2])
            dif = 0;
        else
            REP(i, 1, n - 1)
            {
                if (a[i] != a[dif])
                {
                    dif = i;
                    break;
                }
            }
        cout << dif+1<< endl;
    }
    return 0;
}