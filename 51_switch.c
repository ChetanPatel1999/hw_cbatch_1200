//  Write a program using switch-case to check whether the entered character
// is a vowel or a consonant.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char :");
    scanf("%c", &ch);
    switch (ch)
    {
       case 'a':;
       case 'e':;
       case 'i':;
       case 'o':;
       case 'u': printf("vovel");break;
       default:printf("consonent");
    }
}