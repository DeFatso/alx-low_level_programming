#include <stdio.h>
/**
 *main - main function
 *
 *Return: returns zero
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = a + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55 || b != 57 || c != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
