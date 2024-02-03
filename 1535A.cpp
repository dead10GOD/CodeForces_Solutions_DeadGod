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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int s1,s2,s3,s4;
        cin >> s1 >> s2 >> s3 >> s4;
        if ((max(s1, s2) < min(s3, s4)) || (max(s3, s4) < min(s1, s2)))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}