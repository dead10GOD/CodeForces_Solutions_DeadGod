#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
lli max(lli a, lli b) { return (a > b) ? a : b; }
lli min(lli a, lli b) { return (b > a) ? a : b; }
int main()
{
    int t;
    lli n, sum;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        while (n)
        {
            sum += n;
            n /= 2;
        }
        cout<<sum<<endl;
    }
    return 0;
}