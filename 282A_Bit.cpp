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
    int T, x = 0;
    string str;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> str;
        if (str[0] == '-' || str[2] == '-')
            x--;
        else
            x++;
    }
    cout << x;
    return 0;
}