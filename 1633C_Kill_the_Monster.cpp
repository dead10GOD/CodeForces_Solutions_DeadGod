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
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    double hc, dc, hm, dm, w, a, k,z;
    cin >> t;
    while (t--)
    {
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        double x = 0;
        bool flag = false;
        while (true)
        {
            if (ceil(hm / (dc + k * w)) <= ceil((hc + x * a) / dm))
            {
                flag = true;
                break;
            }
            if (k == 0)
                break;
            k--;
            x++;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}