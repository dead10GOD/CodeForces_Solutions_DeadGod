#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int compare(char s1, char s2)
{
    if (s1 < 91) // s1 is capital
    {
        if (s2 < 91) // s2 is also capital;
        {
            if (s1 < s2)
                return -1;
            else if (s1 > s2)
                return 1;
            else
                return 0;
        }
        else //  if s2 is small
        {
            if (s1 == s2 - 32)
                return 0;
            else if (s1 < s2 - 32)
                return -1;
            else
                return 1;
        }
    }
    else // s1 is small
    {
        if (s2 > 96) // s2 is also small
        {
            if (s1 < s2)
                return -1;
            else if (s1 > s2)
                return 1;
            else
                return 0;
        }
        else // s2 is capital
        {
            if (s1 == s2 + 32)
                return 0;
            else if (s1 < s2 + 32)
                return -1;
            else
                return 1;
        }
    }
    return 0; // dummy return
}
int main()
{
    char s1[101], s2[101];
    cin >> s1;
    cin >> s2;
    int i = 0, ans = 0;
    int l = strlen(s1);
    while (i < l)
    {
        if (compare(s1[i], s2[i]) == 0)
        {
            i++;
            continue;
        }
        else if (compare(s1[i], s2[i]) == -1)
        {
            ans = -1;
            break;
        }
        else
        {
            ans = 1;
            break;
        }
    }
    cout << ans;
    return 0;
}