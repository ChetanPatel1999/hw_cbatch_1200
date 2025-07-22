// airthmatic operator
#include <stdio.h>
void main()
{
    int a, b, ans;
    a = 12;
    b = 7;

    ans = a % b;
    printf("modules/reminder = %d\n", ans);

    ans = a + b;
    printf("addition = %d\n", ans);

    ans = a - b;
    printf("subtraction = %d\n", ans);

    ans = a * b;
    printf("multiplication = %d\n", ans);

    ans = a / b;
    printf("division = %d\n", ans);
}