//  Write a program that takes a number as input and counts how many even
// digits it contains.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 6455346
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            c++;
        }
        num = num / 10;
    }
    printf("count of even digit in given number :  %d", c);
}