#include "bits/stdc++.h"
using namespace std;
#define FAST_IO (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define pb push_back
#define endl '\n'
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define int long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1000000007;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
signed main()
{
    FAST_IO
    string a;
    cin >> a;
    int l = a.size();
    for (int i = 0; i < l;)
    {
        if (i <= l - 3 && a[i] == '1' && a[i + 1] == '4' && a[i + 2] == '4')
            i += 3;
        else if (i <= l - 2 && a[i] == '1' && a[i + 1] == '4')
            i += 2;
        else if (a[i] == '1')
            i += 1;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}