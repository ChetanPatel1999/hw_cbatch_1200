// wap to take two number from user and check number are same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);
    a == b ? printf("numbers are same") : printf("numbers are different");
}