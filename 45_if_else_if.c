// 6. Write a program to accept a number and check it is multiple of 3,5,8 or multiple of
// 3,5 or multiple of 5,8 or multiple of 3,8 or only multiple of 3 or only multiple of 5 or
// only multiple of 8  or not multiple of 3,5,8.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 15
    if (num % 3 == 0 && num % 5 == 0 && num % 8 == 0)
    {
        printf("multiple of 3,5 and 8");
    }
    else if (num % 3 == 0 && num % 5 == 0)
    {
        printf("multiple of 3 and 5");
    }
    else if (num % 3 == 0 && num % 8 == 0)
    {
        printf("multiple of 3 and 8");
    }
    else if (num % 5 == 0 && num % 8 == 0)
    {
        printf("multiple of 5 and 8");
    }
    else if (num % 3 == 0)
    {
        printf("multiple of only 3");
    }
    else if (num % 5 == 0)
    {
        printf("multiple of only 5");
    }
    else if (num % 8 == 0)
    {
        printf("multiple of only 8");
    }
    else
    {
        printf("not multiple of 3,5 and 8");
    }
}