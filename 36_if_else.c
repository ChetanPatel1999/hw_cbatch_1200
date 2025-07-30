// wap to check accordind percentage student is pass or fail.
#include <stdio.h>
void main()
{
    int percantage;
    printf("enter your percentage : ");
    scanf("%d", &percantage);
    if (percantage >= 33)
    {
        printf("student is pass");
    }
    else
    {
        printf("student is fail");
    }
}