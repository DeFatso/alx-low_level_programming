#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - joins two strings
 * @s1 : parameter
 * @s2 : parameter
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result = malloc((len1 + len2 + 1) * sizeof(char));

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
	return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
