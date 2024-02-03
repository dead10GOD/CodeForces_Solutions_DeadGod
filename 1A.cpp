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
int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a%b);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a;
    cin >> n >> m >> a;
    cout << gcd(n * m, a * a);
    return 0;
}