#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main function
 * @argc : parameter 1
 * @argv : parameter 2
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int a, mul = 1;

	if (argc > 1)
	{
	for (a = 1; a < argc; a++)
	mul *= _atoi(argv[a]);
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	}

	return (0);
}

