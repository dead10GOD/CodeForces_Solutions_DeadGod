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
bool isVowel(char s)
{
    return (s == 'A' || s == 'a' || s == 'E' || s == 'e' || s == 'I' || s == 'i' || s == 'O' || s == 'o' || s == 'U' || s == 'u' || s == 'Y' || s == 'y');
}
signed main()
{
    FAST_IO
    string s, ans;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (isVowel(s[i]))
            ;
        else if (s[i] <= 90)
            ans = ans + '.' + (char)tolower(s[i]);
        else
            ans = ans + '.' + s[i];
    }
    cout << ans;
    return 0;
}