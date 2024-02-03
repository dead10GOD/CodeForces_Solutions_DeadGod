#include<stdio.h>
#include<stdlib.h>
int f(int n );
int main()
{
    int n;
    scanf("%d",&n);
    // int ans = f(n);
    printf("%d",f(n));
    return 0;
}
int f(int n )
{
    if (n<6)    return 1;
    return f(n-5) + 1;
}
         //OR

// int main()  
// {
//     int n, count =0;
//     scanf("%d",&n);
//     while (n)    //log n base 5 time complexity 
//     {
//         if(n<6)
//         (
//             count++;
//             break;
//         )
//         else
//         {
//             n=n-5;
//             count++;
//         }
//     }
//     printf("%d",count);
// }