// wap to print sum 1 to n numbers.
#include <stdio.h>
void main()
{
    int i, sum = 0, n;
    printf("enter a num : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 11
    {
        sum = sum + i; // 55
    }
    printf("sum of 1 to %d = %d", n, sum);
    printf("average of 1 to %d = %d", n, sum / n);
}