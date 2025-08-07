// mini project
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 16
    if (age >= 18)
    {
        printf("welcome to my club...\n");
        printf("club menue : \n");
        printf("1. noodles : 80\n");
        printf("2. paneer tika : 150\n");
        printf("3. sandwitch : 120\n");
        printf("please order : ");
        scanf("%d", &order); // 5
        if (order == 1)
        {
            printf("your noodles is orderd please pay 80 rs");
        }
        else if (order == 2)
        {
            printf("your paneer tika is orderd please pay 150 rs");
        }
        else if (order == 3)
        {
            printf("your sandwitch is orderd please pay 120 rs");
        }
        else
        {
            printf("please press 1 to 3");
        }
    }
    else
    {
        printf("you are not adult please try after %d year", 18 - age);
    }
}