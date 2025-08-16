// wap to print even number series 1 to given number.
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 30
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}