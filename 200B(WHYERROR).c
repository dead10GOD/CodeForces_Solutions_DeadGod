#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter no of drinks:");
    int n;
    scanf("%d",&n);
    int *p = (int *)malloc(n * sizeof(int));
    double ans = 0;
    printf("now enter the perecnts:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", p + i);
        ans = ans + p[i] * 1.00;
    }
    free(p);
    ans = ans / (n * 100);
    printf("%lf", ans);
    return 0;
}