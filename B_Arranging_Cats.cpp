#include "bits/stdc++.h"
using namespace std;
#define int long long
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i0, i1, o0, o1;
    string s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s1;
        cin >> s2;
        i0 = i1 = o0 = o1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == '0')
                i0++;
            if (s1[i] == '1')
                i1++;
            if (s2[i] == '0')
                o0++;
            if (s2[i] == '1')
                o1++;
        }
        
    }
    return 0;
}