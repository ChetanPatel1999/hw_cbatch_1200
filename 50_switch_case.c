// wap to check voter is eligible for voting or not using switch case.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);
    switch (age >= 18)
    {
    case 1:
        printf("you can vote");
        break;
    case 0:
        printf("you can not vote");
        break;
    }
}