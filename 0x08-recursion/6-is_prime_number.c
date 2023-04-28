#include "main.h"
#include <math.h>
/**
 * is_prime - function that determain is number is prime
 * Return: returns int
 * @n :parameter
 * @i :parameter
 */
int is_prime(int n, int i)
{

if (n < 2)
return (0);

if (i > n / 2)
return (1);

if (n % i == 0)
return (0);

return (is_prime(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is a prime number
 *
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
