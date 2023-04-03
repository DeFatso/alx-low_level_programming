#include "main.h"
/**
 * _strchr -  locates a character in a string
 *
 * @s : input
 * @c : input
 *
 * Return: returns null
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}
