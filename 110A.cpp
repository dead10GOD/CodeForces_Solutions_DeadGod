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
    lli n, sum = 0;
    cin >> n;
    while (n)
    {
        sum += (n % 10 == 4 || n % 10 == 7) ? 1 : 0;
        n /= 10;
    }
    if (sum == 4 || sum == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}