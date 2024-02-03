#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 3 == 0) // if number is divisble by 3, Vanya can never win
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
    return 0;
}