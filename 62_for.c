// wap to print multiple of 4   1 to 20.
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 20; i++) // 5
    {
        if (i % 4 == 0)
        {
            printf("%d ", i);
        }
    }
}