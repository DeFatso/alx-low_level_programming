#include <stdio.h>
/**
 *main - main function
 *
 *Return: returns zero
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 57 && b != 56)
			{
			putchar(',');
			}
			putchar(' ');
		}
	putchar('\n');

	return (0);
}
