// wap to convert weight gram into kg.
#include <stdio.h>
void main()
{
    float kg, gram;
    printf("enter weight in gram = ");
    scanf("%f", &gram); // 2000
    kg = gram / 1000;
    printf("weight in kg = %.1f", kg);
}                