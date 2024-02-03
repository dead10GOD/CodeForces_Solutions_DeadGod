#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
// lli max(lli a, lli b) { return (a > b) ? a : b; }
// lli min(lli a, lli b) { return (b > a) ? a : b; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, c = 0;
    cin >> n >> m;
    for (int a = 0; a * a <= n; a++)
        for (int b = 0; b * b <= m; b++)
        {
            if ((a * a + b == n) && (a + b * b == m))
                c++;
        }
    cout << c;

    return 0;
}