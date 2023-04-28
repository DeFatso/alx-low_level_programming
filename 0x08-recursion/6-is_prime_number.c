#include "main.h"
#include <math.h>
/**
 * is_prime_number - function that determain is number is prime
 * Return: returns int
 * @n :parameter
 *
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
