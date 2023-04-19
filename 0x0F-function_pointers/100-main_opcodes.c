#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc : parameter
 *@argv : parameter
 *Return: returns 0
 */
int main(int argc, char *argv[])
{
	int nop = atoi(argv[1]);
	char *ptr = (char *)&main;
	int i, op = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (nop < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < nop; i++)
	{
		if (ptr[i] == 0xC3)
		{
			printf("%02x\n", ptr[i]);
			op++;
			break;
		}
		printf("%02x \n", ptr[i]);
		op++;
	}

	return (0);
}
