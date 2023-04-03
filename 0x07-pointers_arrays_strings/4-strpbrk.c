#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s : input
 * @accept : input
 *
 * Return: returns null
 */
char *_strpbrk(char *s, char *accept)
{
	int x, n;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[x] == accept[n])
				return (s + x);
		}
	}
	return (NULL);
}
