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
	if (n <= 1)
	{
	return (0);
	}

	int sqrt_n = (int) sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
	{
	if (n % i == 0)
	{
	return (0);
	}
	}

	return (1);
}
