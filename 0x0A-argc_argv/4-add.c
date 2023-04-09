#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - main function
 * @argc : parameter 1
 * @argv : parameter 2
 * Return : returns 0
 */
int main(int argc, char *argv[])
{
	int a, mul = 0;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	{
	char *arg = argv[a];
	int i;

	for (i = 0; arg[i] != '\0'; i++)
	{
	if (!isdigit(arg[i]))
	{
	printf("Error\n");
	return (1);
	}
	}
	mul += atoi(arg);
	}
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}

