#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a : input
 * @size : prints
 *
 * Return: returns null
 */
void print_diagsums(int *a, int size)
{
	int x, n, fs = 0, ss = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		fs = fs + a[x];

	for (n = 0; n <= (size * size) - size; n = n + size - 1)
		ss = ss + a[n];
		printf("%d, %d\n", fs, ss);
}
