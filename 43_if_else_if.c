//  Write a program to Check whether a person is a child, teenager, adult, or senior
// based on age.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age);
    if (age <= 13)
    {
        printf("you are child");
    }
    else if (age <= 19)
    {
        printf("you are teenager");
    }
    else if (age <= 50)
    {
        printf("you are adult");
    }
    else if (age <= 100)
    {
        printf("you are senior");
    }
    else
    {
        printf("invalid age ");
    }
}