// wap to check amount is less than 500 or greater then 500.
#include <stdio.h>
void main()
{
    int amount;
    printf("enter amount : ");
    scanf("%d", &amount);
    if (amount > 500)
    {
        printf("amount is greater then 500");
    }
    else
    {
        printf("amount is less then 500");
    }
}