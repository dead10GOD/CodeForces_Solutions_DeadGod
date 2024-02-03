#include "bits/stdc++.h"
using namespace std;
using lli =  long long int;
int main()
{
    lli t, n, result, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result = 0;
        for (int i = 1; i <= 9; i++)
        {
            num = i;
            while (num <= n)
            {
                result++;
                num = num * 10 + i;
            }
        }
        cout << result<<endl;
    }
    return 0;
}