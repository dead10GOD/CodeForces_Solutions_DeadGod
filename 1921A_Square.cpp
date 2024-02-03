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
    int t, s1, s2, s3, s5, area;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;  // reusing the variables s2 coz we get our answer only from x values
        cin >> s3 >> s2;
        cin >> s5 >> s2;
        if (s3 != s1)
            area = (s1 - s3) * (s1 - s3);
        else
            area = (s1 - s5) * (s1 - s5);
        cin >> s1 >> s2; // reused variables because we already got the answer
        cout << area << endl;
    }
    return 0;
}