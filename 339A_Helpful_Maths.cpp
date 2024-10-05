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
    string s, ans;
    int one = 0, two = 0, three = 0;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i += 2)
    {
        if (s[i] == '1')
            one++;
        if (s[i] == '2')
            two++;
        if (s[i] == '3')
            three++;
    }
    while (one--)
    {
        ans += '1';
        ans += '+';
    }
    while (two--)
    {
        ans += '2';
        ans += '+';
    }
    while (three--)
    {
        ans += '3';
        ans += '+';
    }
    ans.pop_back();
    cout << ans;
    return 0;
}