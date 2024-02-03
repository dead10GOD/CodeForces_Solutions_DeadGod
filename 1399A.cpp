#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
lli max(lli a, lli b) { return (a > b) ? a : b; }
lli min(lli a, lli b) { return (b > a) ? a : b; }
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (i = 0; i < n - 1; i++)
            if (arr[i + 1] - arr[i] > 1)
                break;
        if (i != n - 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}