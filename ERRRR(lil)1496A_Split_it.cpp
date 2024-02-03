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
    int t, n, k;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        int count = 0;
        int i;
        for (i = 0; i < n / 2; i++)
        {
            count++;
            if (s[i] != s[n - i - 1])
                break;
        }
        if (i >= k - 1 && n >= 2 * k + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}