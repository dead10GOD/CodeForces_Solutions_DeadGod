#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t, n, i, num;
    cin >> t;
    char s[101], first, last;
    while (t--)
    {
        n = 0;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
            n++;
        // n has the last character
        first = s[0];
        last = s[n - 1];
        num = n - 2;
        if (n > 10)
        {
            i = 0;
            s[0] = first;
            s+1 = num;
            
        }

        else
            cout << s;
    }

    return 0;
}