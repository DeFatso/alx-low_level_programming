#include<stdio.h>
int main(void)
{
	int intType;
	double doubleType;
	char charType;

	printf("Size of int: %lu byte(s)\n", sizeof(intType));
	printf("Size of double: %lu byte(s)\n", sizeof(doubleType));
	printf("Size of char: %lu byte(s)\n", sizeof(charType));
	return (0);
}
