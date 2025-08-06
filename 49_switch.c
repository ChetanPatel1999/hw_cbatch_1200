// Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter first latter of name : ");
    scanf("%c", &ch); // p
    switch (ch)
    {
    case 's':
        printf("surpankha ");
        break;
    case 'h':
        printf("hari krishna");
        break;
    case 'k':
        printf("khushi chouhan");
        break;
    case 'g':
        printf("gourav patidar");
        break;
    case 'a':
        printf("abhishek patidar");
        break;
    default:
        printf("no one friend which name start with %c ", ch);
    }
}