#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    int t, n, arr[4], count, p; // count means k
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0, p = 1;
        while (n > 0)
        {
            if (n % 10 != 0)   // just count the numebr of non zero digits
                arr[count++] = (n % 10) * p;
            n /= 10;
            p *= 10;
        }
        cout << count << endl;
        for (int i = 0; i < count; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}