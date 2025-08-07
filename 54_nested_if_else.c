// wap to check givan char is
// lowercase or upper case alphabet or not alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char = ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            printf("lowercase alphabet");
        }
        else
        {
            printf("uppercase alphabet");
        }
    }
    else
    {
        printf("not a alphabet");
    }
}