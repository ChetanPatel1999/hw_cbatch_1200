// wap to check given number is perfact or not.
#include <stdio.h>
void main()
{
    int i, n, res = 0;
    printf("enter a num : ");
    scanf("%d", &n);         // 15
    for (i = 1; i <= n; i++) // 16
    {
        if (n % i == 0)
        {
            res = res + i; // 24
        }
    }
    if (res == n * 2)
    {
        printf("perfact number");
    }
    else
    {
        printf("not perfact number");
    }
}