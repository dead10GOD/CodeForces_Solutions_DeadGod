#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, a, b, dif, count; // dif is the absolute difference
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%d %d", &a, &b);
        dif = b - a;
        if (dif < 0)
            dif = dif * -1;
        // THE BELOW THREE LINES MAKE SURE THAT IF THERE IS ANY NONZERO DIGIT AT ONES PLACE IT IS COUNNTED SEPARATELY
        if (dif % 10 != 0)
        {
            dif = dif - dif % 10;
            count++;
        }
        while (dif % 10 == 0 && dif != 0)
            dif /= 10;

        
        printf("%d\n", count+dif);
    }
    return 0;
}
