#include <iostream>
using namespace std;
int main()
{
    int n, k, num, count = 0, kthelement = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (i == k)
            kthelement = num;
        if (i <= k && num > 0)
            count++;
        else if (i > k && num >= kthelement  && kthelement>0) 
            count++;
    }
    cout<<count;
    return 0;
}