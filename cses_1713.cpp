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
const int N = 1e6;
signed main()
{
    FAST_IO
    vector<int> div(N + 1);
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            div[j]++; // i is a divisor of j
    }
    // div[x] stores no. of divisors oj j including 1 and the no. itself"
    // O(nlogn)

    int T, ele;
    cin >> T;
    while (T--)
    {
        cin >> ele;
        cout << div[ele] << "\n";
    }
    return 0;
}