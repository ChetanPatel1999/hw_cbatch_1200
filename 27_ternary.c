// wap to check voter is eligible for casting vote or not.
#include <stdio.h>
void main()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age); //24
    age >= 18 ? printf("you can vote") : printf("you can not vote");
}
