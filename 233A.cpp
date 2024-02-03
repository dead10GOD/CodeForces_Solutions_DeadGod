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
    int n, i = 0;
    cin >> n;
    if (n & 1)
        cout << -1;
    else
        while (i < n)
        {
            cout << i + 2 << " " << i + 1 << " ";
            i += 2;
        }
    return 0;
}