#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc : parameter 1
 * @argv : parameter 2
 * Return : returns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
