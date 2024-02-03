#include "bits/stdc++.h"
using namespace std;
using lli = long long int;
using vi = vector<int>;
int main()
{
    char str[51];
    int n;
    cin >> n;
    cin>>str;
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i+1])
            res++;
    }
    cout<<res;
    return 0;
}