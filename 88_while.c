//  Write a program that takes a number as input and counts how many digits
// it contains.
#include <stdio.h>
void main()
{
    int num, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 6455346
    while (num > 0)
    {
        c++;//3
        num = num / 10;
    }
    printf("count of digit in given number :  %d", c);
}