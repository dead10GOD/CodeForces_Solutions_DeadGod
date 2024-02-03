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
void solve()
{
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ele, flag = 0;
    cin >> n;
    while (n--)
    {
        cin >> ele;
        if (ele == 1)
            flag = 1;
    }
    if (flag)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}