// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d\n", n * i);
        i++;
    }
}