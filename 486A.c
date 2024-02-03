#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long n, sum = 0;
    scanf("%lli", &n);
    sum = (n % 2 == 0) ? n / 2 : (n / 2 + 1) * (-1);
    printf("%lli", sum);
    return 0;
}