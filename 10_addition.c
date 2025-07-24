// wap to take two integer number from user and display sum.
#include <stdio.h>
void main()
{
	int a, b, c; // variable declaration
	printf("enter first value = ");
	scanf("%d", &a); // take a value from user
	printf("enter second value = ");
	scanf("%d", &b);
	printf("value of a = %d\n", a);
	printf("value of b = %d\n", b);
	c = a + b;
	printf("addition = %d", c);
}
