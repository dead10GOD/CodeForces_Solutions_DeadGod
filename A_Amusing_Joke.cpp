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
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    int a[26] = {0};
    for (char x : s1)
        a[(int)x - 65]++;

    for (char x : s2)
        a[x - 65]++;

    for (char x : s3)
        a[x - 65]--;

    bool flag = true;
    for (int i = 0; i < 26; i++)
        if (a[i] != 0)
        {
            flag = false;
            break;
        }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
signed main()
{
    FAST_IO
    solve();
    return 0;
}