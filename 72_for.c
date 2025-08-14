// wap to print factorial of given number.
#include <stdio.h>
void main()
{
    int num, i, fact = 1;
    printf("enter a number : ");
    scanf("%d", &num);         // 5
    for (i = 1; i <= num; i++) // 5
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
}