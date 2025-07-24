// comparision operator
#include <stdio.h>
void main()
{
    int a, b, ans;
    a = 9;
    b = 24;

    ans = a != b;
    printf("ans = %d\n", ans); // 1

    ans = a == b;
    printf("ans = %d\n", ans); // 0

    ans = a <= b;
    printf("ans = %d\n", ans); // 1

    ans = a >= b;
    printf("ans = %d\n", ans); // 0

    ans = a < b;
    printf("ans = %d\n", ans); // 1

    ans = a > b;
    printf("ans = %d\n", ans); // 0
}