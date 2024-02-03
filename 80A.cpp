#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define REP(i, start, end) for (int i = start; i <= end; i++) // both inclusive
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
// lli max(lli a, lli b) { return (a > b) ? a : b; }
// lli min(lli a, lli b) { return (b > a) ? a : b; }
int N = 50;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<bool> prime(N + 1, true); // initially all are set to prime
    prime[0] = prime[1] = false;     // 1 is neither prime nor composite
    for (int i = 2; i * i <= N; i++)
    {
        if (!prime[i])
            continue;
        for (int j = i * i; j <= N; j += i)
            prime[j] = false;
    }
    /*prime[x] stores if x is prime or not (1 if prime 0 otherwise)
    O(nloglogn)*/
    int n, m, i;
    cin >> n >> m;
    if (n == 2 && m == 3)
        cout << "YES";
    else if (n == 2 && m != 3)
        cout << "NO";
    else
    {
        for (i = n + 2; i < N; i = i + 2)
            if (prime[i])
                break;
        if (i == m)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}