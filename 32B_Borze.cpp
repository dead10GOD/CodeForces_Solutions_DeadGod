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
    int n, k = 0;
    string s, ans;
    cin >> s;
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            ans += '0';
        else if (i != n - 1)
        {
            if (s[i] == '-' && s[i + 1] == '.')
            {
                ans += '1';
                i++;
            }
            else if (s[i] == '-' && s[i + 1] == '-')
            {
                ans += '2';
                i++;
            }
        }
    }
    cout << ans;
    return 0;
}