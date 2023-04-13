#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concantates strings
 * Return: returns pointer
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t len = len1 + ((len2 < n) ? len2 : n);
	char *result = malloc(len + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (result == NULL)
	{
		exit(EXIT_FAILURE);
		return (NULL);
	}
	strncpy(result, s1, len1);
	strncat(result, s2, len - len1);
	result[len] = '\0';
	return (result);
}
