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
const int MOD = 1e9 + 7;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
signed main()
{
    FAST_IO
    int a = 3, b = 3, ele, A, B = 14;
    for (int i = 0; i < 5; i++)
    {
        cin >> ele;
        if (i == 0)
        {
            A = ele;
            a--;
            continue;
        }
        if (ele == A)
        {
            a--;
        }
        else if (B == 14)
        {
            B = ele;
            b--;
        }
        else if (ele == B)
        {
            b--;
        }
        else
            break;
    }
    if ((a == 0 && b == 1) || (a == 1 && b == 0))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}