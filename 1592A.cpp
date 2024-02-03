#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
// lli max(lli a, lli b) { return (a > b) ? a : b; }
// lli min(lli a, lli b) { return (b > a) ? a : b; }

int main()
{
    lli t, n, h, max, second, ele, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> h;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (i == 0)
                max = second = ele;
            if (ele > max)
            {
                second = max;
                max = ele;
            }
        }
        ans = (h / (max + second)) * 2;
        if (h % (max + second) == 0)
            ans = ans;
        else
        {
            if (h % (max + second) > max && h % (max + second) > second)
                ans = ans + 2;
            else
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}