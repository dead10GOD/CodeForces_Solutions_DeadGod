#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x1, x2, x3;
    int a, b, c;
        scanf("%d %d %d", &x1, &x2, &x3);
        // making 'a' the smallest , 'c' the largest and 'b' the second largest
        // i.e. a < b < c
        c = (x1 > x2) ? (x1 > x3 ? x1 : x3) : (x2 > x3 ? x2 : x3);
        a = (x1 < x2) ? (x1 < x3 ? x1 : x3) : (x2 < x3 ? x2 : x3);
        b = (x1 >= x2 && x1 >= x3) ? ((x2 >= x3) ? x2 : x3) : ((x2 >= x3) ? ((x1 >= x3) ? x1 : x3) : ((x1 >= x2) ? x1 : x2));
        printf("%d\n",b-a+c-b);
    return 0;
}