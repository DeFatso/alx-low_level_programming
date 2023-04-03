#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals 
 * @a: pointer 
 * @size: which diagonal to add
 */

void print_diagsums(int *a, int size)
{
	int x, fs, ss;

	fs = ss = 0;
	for (x = 0; x < (size * size); x += size + 1)
		fs += a[x];
	for (x = size - 1; x < (size * size - 1); x += size - 1)
		ss += a[x];
	printf("%d, %d\n", fs, ss);
}
