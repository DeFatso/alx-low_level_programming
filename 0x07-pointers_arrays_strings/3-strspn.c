#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s : input
 * @accept : input
 *
 * Return: returns null
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0' && s[x] != accept[y])
			y++;
		if (accept[y] == '\0')
			return (x);
		x++;
	}
	return (x);
}
