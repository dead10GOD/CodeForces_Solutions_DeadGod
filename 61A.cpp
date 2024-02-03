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
int num(char a) { return int(a) - 48; }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    vi ans;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
        ans.pb(num(s1[i]) ^ num(s2[i]));
    for (int i = 0; i < s1.length(); i++)
    {
        cout << ans[i];
    }

    return 0;
}