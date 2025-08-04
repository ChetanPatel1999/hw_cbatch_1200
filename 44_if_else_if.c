// 15. Determine the grade based on marks.
// Marks (90-100) A grade
// Marks (75-89)   B grade
// Marks (50-74)  C grade
// Marks ( < 50)   F grade
#include <stdio.h>
void main()
{
    int per;
    printf("enter you percentage : ");
    scanf("%d", &per);
    if (per >= 90 && per <= 100)
    {
        printf("grade A");
    }
    else if (per >= 75 && per <= 89)
    {
        printf("grade B");
    }
    else if (per >= 50 && per <= 74)
    {
        printf("grade C");
    }
    else if (per >= 33 && per < 50)
    {
        printf("grade F");
    }
    else if (per >= 1 && per < 33)
    {
        printf("fail");
    }
    else
    {
        printf("invalid percentage");
    }
}