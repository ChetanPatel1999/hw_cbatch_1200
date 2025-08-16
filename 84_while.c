// wap to print factors of given number.
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}