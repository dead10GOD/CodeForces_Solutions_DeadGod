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
    int T;
    cin >> T;
    string str;
    int stk_cnt = 0;
    while (T--)
    {
        cin >> str;
        stk_cnt = 1;
        for (int i = 1; i < str.length(); i++)
        {
            if (stk_cnt == 0)
                stk_cnt++;
            else if (str[i] == 'B')
                stk_cnt--;
            else
                stk_cnt++;
        }
        // int n = str.length();
        // count = n;
        // for (int i = 0; i < n; i++)
        // {
        //     if (S.empty())
        //         S.push(str[i]);
        //     else if (S.top() == 'A' && str[i] == 'B')
        //     {
        //         count -= 2;
        //         S.pop();
        //     }
        //     else if (S.top() == 'B' && str[i] == 'B')
        //     {
        //         count -= 2;
        //         S.pop();
        //     }
        //     else
        //         S.push(str[i]);
        cout << stk_cnt << "\n";
    }
    // cout << S.size()<< "\n";

    return 0;
}