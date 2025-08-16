// wap to print table of given number.
#include <stdio.h>
void main()
{
    int i, n;
    i = 1;
    printf("enter a num : ");
    scanf("%d", &n); // 3
    while (i <= 10)
    {
        printf("%d\n", n * i); // 3 6 9 12 15 18 30 33 36
        i++;
    }
}