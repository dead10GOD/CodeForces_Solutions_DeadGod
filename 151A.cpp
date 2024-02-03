#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int A, B, C,smallest;
    // toastFromSlices =A
    A = c * d;
    // toastFromDrinks = B
    B = l * k / nl;
    // toastFromSalt = C
    C = p / np;
    smallest = (A<B) ? (A<C?A:C) : (B<C?B:C);
    cout << smallest / n;
    return 0;
}