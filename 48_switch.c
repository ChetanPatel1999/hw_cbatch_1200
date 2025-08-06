#include <stdio.h>
void main()
{
    int num, a, b, c;
    printf("<-----welcome to my calculator----->\n");
    printf("  press 1 to addition \n");
    printf("  press 2 to sutraction \n");
    printf("  press 3 to multiplication \n");
    printf("  press 4 to division \n");
    printf("  press number :");
    scanf("%d", &num); // 12
    switch (num)
    {
    case 1:
        printf("you choosed addition app \n");
        printf("enter first num = ");
        scanf("%d", &a);
        printf("enter second num = ");
        scanf("%d", &b);
        c = a + b;
        printf("addition = %d\n", c);
        break;
    case 2:
        printf("you choosed subtraction app \n");
        printf("enter first num = ");
        scanf("%d", &a);
        printf("enter second num = ");
        scanf("%d", &b);
        c = a - b;
        printf("subtraction = %d\n", c);
        break;
    case 3:
        printf("you choosed multipliction app \n");
        printf("enter first num = ");
        scanf("%d", &a);
        printf("enter second num = ");
        scanf("%d", &b);
        c = a * b;
        printf("multipliction = %d\n", c);
        break;
    case 4:
        printf("you choosed division app \n");
        printf("enter first num = ");
        scanf("%d", &a);
        printf("enter second num = ");
        scanf("%d", &b);
        c = a / b;
        printf("division = %d\n", c);
        break;
    default:
        printf("please enter num  1 to 4");
        break;
    }
}