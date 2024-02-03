#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test, a, b, ans;
    scanf("%d", &test);
    while (test--)
    {
        scanf("%d %d", &a, &b);
        ans = (a == ((a / b) * b)) ? 0 : (b * (a / b + 1) - a);
        printf("%d\n",ans);
    }
    return 0;
}