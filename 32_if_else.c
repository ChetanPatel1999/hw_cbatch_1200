// wap to check person is eligible for casting vote or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else
    {
        printf("you can not vote");
    }
}