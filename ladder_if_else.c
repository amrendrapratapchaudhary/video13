// #include <stdio.h>
// int main()
// {
//     int week;
//     printf("enter a week number \n");
//     scanf("%d", &week);
//     if (week == 0 || week == 6)
//     {
//         printf("weekend");
//     }
//     else if (week == 1)
//     {
//         printf("monday");
//     }
//     else if (week == 2)
//     {
//         printf("tuesday");
//     }
//     else if (week == 3)
//     {
//         printf("wednesday");
//     }
//     else if (week == 4)
//     {
//         printf("thusday");
//     }
//     else if (week == 5)
//     {
//         printf("friday");
//     }
//     else
//     {
//         printf("invalid day");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int week;
    printf("enter a week number \n");
    scanf("%d", &week);
    if (week == 0 || week == 7)
    {
        printf("sunday");
    }
    else if (week == 1)
    {
        printf("monday");
    }
    else if (week == 2)
    {
        printf("tuesday");
    }
    else if (week == 3)
    {
        printf("wednesday");
    }
    else if (week == 4)
    {
        printf("thusday");
    }
    else if (week == 5)
    {
        printf("friday");
    }
    else if(week=6)
    {
        printf("saturday");
    }
    else
    {
        printf("invalid day");
    }
    return 0;
}