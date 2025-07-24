// compound assignment
#include <stdio.h>
void main()
{
    int a, b;
    a = 12;
    b = 3;
    printf("a = %d\n", a); // 4
    printf("b = %d\n", b); // 3

    // a += b;                // a=a+b;
    // b *= b;
    // a *= 5;
    // a -= b;
    a %= b;
    printf("a = %d\n", a); // 20
    printf("b = %d\n", b); // 3
}