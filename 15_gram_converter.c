// wap to convert weight kg into gram.
#include <stdio.h>
void main()
{
    float kg, gram;
    printf("enter weight in kg = ");
    scanf("%f", &kg); // 1.2
    gram = kg * 1000;
    printf("weight in gram = %.0f", gram);
}