#include<stdio.h>
#include<stdlib.h>  
int main()
{
    int k ,n,w,total;
    scanf("%d%d%d",&k,&n,&w);
    total = (n > k*w*(w+1)/2)?0:(k*w*(w+1)/2 - n);
    printf("%d",total);
    return 0;
}