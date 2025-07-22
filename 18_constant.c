// constant in  c lanaguge
#include <stdio.h>
void main()
{
    const int a = 500;
    printf("a = %d\n", a);
    //  a = 90; show error
    printf("a = %d\n", a);
    int c;
    c = 80 + a;
    printf("c = %d\n", c);
}