#include <stdio.h>
/**
 *main - main function
 *
 *@argv : parameter
 *@argc : parrameter one
 * Return: returns argc
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (argc);
}