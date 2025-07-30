// wap to check given two amount are same or diffenet.
#include <stdio.h>
void main()
{
    int amount1, amount2;
    printf("enter your amount1 = ");
    scanf("%d", &amount1);
    printf("enter your amount2 = ");
    scanf("%d", &amount2);
    if (amount1 == amount2)
    {
        printf("amounts are same");
    }
    else
    {
        printf("amount are different");
    }
}