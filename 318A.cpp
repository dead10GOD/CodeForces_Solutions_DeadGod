#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    lli n, k, mid;
    cin >> n >> k;
    // if n is odd there are there are n/2 even and n/2 +1 odd numbers and
    // if n is even there are there are n/2 odd and n/2 even numbers and
    mid = (n % 2 == 0) ? n/2 : n/2 + 1;    // or mid  = (n+1)/2 simply
    if (k <= mid)
        cout << 2*k - 1;
    else
        cout <<(k - mid)*2;
    return 0;
}