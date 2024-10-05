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
    int n, o = 0;
    string s;
    cin >> s;
    n = s.size();
    string ans;
    map<char, int> m;
    REP(i, 0, s.size() - 1)
    m[i]++;
    for (auto i : m)
    {
        if (!(n & 1) && i.ss & 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        else if (n & 1 && i.ss & 1)
            o++;
    }
    if (o != 1) // if in odd length string there is more than on echaracter which appears odd number of times then also answer does noit exist
    {
        cout << "NO SOLUTION";
        return 0;
    }
    int i = 0;
    char ch;
    if (!(n & 1))
    {
        for (auto c : m)
        {
            c.second /= 2;
            while (c.second--)
                ans += c.first;
        }
        cout << ans;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    else
    {
        for (auto c : m)
        {
            if (!c.second & 1)
            {
                c.second /= 2;
                while (c.second--)
                    ans += c.first;
            }
            else
                ch = c.first;
        }
        cout << ans;
        cout<<ch;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }

    return 0;
}