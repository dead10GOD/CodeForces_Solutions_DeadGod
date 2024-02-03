#include <iostream>
using namespace std;
int main()
{
    long t, x, y, substract, n, rem;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        rem = n % x;
        if (y==0)  // i.e if perfectly divisible is required then simply substract the remainder
            substract = rem;
        else if (rem >= y)
            substract = rem % y;
        else 
            substract = rem + (x - y); // WORKED OUT FORMULA with ex: n=19 to 29, x=7,y=5
        cout << n - substract << endl;
    }
    return 0;
}