#include <stdio.h>
#include <math.h>

int main(void)
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, v1, v2;
        scanf("%d %d %d", &l, &v1, &v2);

        float a = (float)(l / v1);

        float b = (float)l / v2;

        if (b != (int)b)
        {
            b = (int)b + 1;
        }

        int c = (int)b;
        //  printf("\n%f %f %d",a,b,c);
        if (a > c)
        {
            printf("%d\n", (int)a - c - 1);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}