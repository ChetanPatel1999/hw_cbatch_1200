// wap to print multiple of 7 to given number.
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 44
    while (i <= n)
    {
        if (i % 7 == 0)
        {
            printf("%d ", i); //7 14 21 28 35 42
        }
        i++; // 26
    }
}