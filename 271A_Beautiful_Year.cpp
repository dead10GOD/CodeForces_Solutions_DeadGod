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
    int y;
    cin >> y;
    int num = y;
    while (true)
    {
        num += 1;
        int a = num / 1000;
        int b = num / 100;
        int c = num / 10;
        int d = num;
        b %= 10;
        c %= 10;
        d %= 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    cout << num << "\n";
    return 0;
}
