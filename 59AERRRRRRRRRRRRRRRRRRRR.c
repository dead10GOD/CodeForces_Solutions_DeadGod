#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[101];
    scanf("%s", a);
    int cnt[2];
    cnt[0] = 0;
    cnt[1] = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 97 && a[i] <= 122)
            cnt[0]++;
        else
            cnt[1]++;
    }
    i = 0;
    if (cnt[0] >= cnt[1])
    {
        while (a[i] != '\0')
        {
            if (a[i] < 97) // i.e if capital
                a[i] = a[i] + 32;
            i++;
        }
    }
    else
    {
        while (a[i] != '\0')
        {
            if (a[i] >= 97) // i.e if small
                a[i] = a[i] - 32;
            i++;
        }
    }
    printf("%s", a);
    return 0;
}