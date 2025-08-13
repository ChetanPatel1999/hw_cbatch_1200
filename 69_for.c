// wap to count factors of given number.
#include <stdio.h>
void main()
{
    int i, n, res = 0;
    printf("enter a num : ");
    scanf("%d", &n);         // 12
    for (i = 1; i <= n; i++) //
    {
        if (n % i == 0)
        {
            res++; // 4
        }
    }
    printf("factors count =  %d ", res);
}