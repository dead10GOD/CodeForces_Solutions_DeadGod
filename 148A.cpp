#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    for (int i = 1; i <= d; i++)
        ans += ((i % k==0) || (i % l==0) || (i % m==0) || (i % n==0));
    cout << ans;

    return 0;
}