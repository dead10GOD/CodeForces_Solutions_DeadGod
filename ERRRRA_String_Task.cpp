#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define endl '\n'
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
bool isVowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    char str[201];
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
            continue;
        else if (s[i] <= 90)
        {
            str[j++] = '.';
            str[j++] = (char)(str[i] + 32);
        }
        else
        {
            str[j++] = '.';
            str[j++] = str[i];
        }
        // if (i == s.length() - 1)
        //     str[j] = '\0';
    }
    for (int i = 0; i < j; i++)
        cout << str[i];

    return 0;
}