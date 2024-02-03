#include "bits/stdc++.h"

using namespace std;

const int MODULO = 1000000007;

long long count_divisible_by_3(long long x) {
    return ((long long)pow(10, x) % MODULO) / 3 % MODULO;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long x;
        cin >> x;
        long long result = count_divisible_by_3(x);
        cout << result << endl;
    }

    return 0;
}