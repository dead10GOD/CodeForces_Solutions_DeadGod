#include <stdio.h>
#include <stdlib.h>
void swapp(char *a, char *b);
int main()
{
    char str[101];
    scanf("%s", str);
    int a, c; // position pointers to 1 2 and 3
    int i = 0;
    int len = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    c = len;
    a = 0;
    for (i = 0; i <= len; i++)
    {
        if (str[i] == 2 || str[i] == '+')
            continue;
        if (str[i] == 3)
        {
            while (str[c] == 3)
                c--;
            if (str[c] != len)
                swapp(str + c, str + i);
        }
        if (str[i] == 1)
        {
            while (str[a] == 1)
            {
                a++;
            }
            if (str[a] != 0)
                swapp(str + a, str + i);
        }
    }
    printf("%s", str);

    return 0;
}
void swapp(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}