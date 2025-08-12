// wap to print sum 1 to n only even number numbers.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);         // 10
    for (i = 1; i <= n; i++) // 11
    {
        if (i % 2 == 0)
        {
            sum = sum + i; // 30
        }
    }
    printf("sum of 1 to %d only even number = %d", n, sum);
}