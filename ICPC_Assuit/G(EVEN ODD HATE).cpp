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
    int t;
    cin >> t;
    int odd, ele;
    while (t--)
    {
        int n;
        cin >> n;
        int num = n;
        odd = 0;
        while (n--)
        {
            cin >> ele;
            if (ele & 1)
                odd++;
        }
        if (num & 1)
            cout << -1 << endl;
        else
            cout << abs(num / 2 - odd) << endl;
    }
    return 0;
}