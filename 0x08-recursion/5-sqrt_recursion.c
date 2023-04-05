#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns squareroot
 * Return: returns _sqrt(n, 1)
 * @n : parameter
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - returns natural squareroot
 * @n : parameter
 * @i : parameter
 *Return: returns squareroot of n
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
	return (-1);
	}
	if (sqrt == n)
	{
	return (i);
	}

	return (_sqrt(n, i + 1));
}
