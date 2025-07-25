// logical operator
#include <stdio.h>
void main()
{
    int ans;
    // ans = 12 > 7 && 6 == 6 && 300 > 89;
    // ans = 78 > 45 || 7 > 22;
    // ans = !(12 > 8);
    // ans = !(12 > 8 && 8 == 8);
    ans = 12 > 8 && !(8 == 89);

    printf("ans = %d", ans);
}