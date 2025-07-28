// WAP to check even or odd

// #include<stdio.h>
// int main ()
// {
//     int num;
//     printf("enter a num \n");
//     scanf("%d",&num);
//     if(num%2==0)
//     {
//         printf("num is even \n");
//     }
//     else
//     {
//         printf("num is odd \n");
//     }
//     return 0;
// }

#include<stdio.h>
int main ()
{
    int num;
    printf("enter a num \n");
    scanf("%d",&num);
    if(num&1)
    printf("number is odd");
    else
    printf("number is even");
    return 0;
}