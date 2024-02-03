#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,n,ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d",&n);
        ans = (n>2)?((n%2==0)?n/2-1:n/2):0;
        printf("%d\n",ans);
    }
    return 0;
}