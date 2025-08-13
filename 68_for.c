// wap to print factors of given number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 35
    printf("factors of %d : ", n);
    for (i = 1; i <= n; i++) //
    {
        if (n % i == 0)
        {
            printf("%d ", i); // 4 6
        }
    }
}