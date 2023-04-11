#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates array
 * @str : parameter
 * Return: returns duplicate
 */
char *_strdup(char *str)
{
size_t len = strlen(str);

char *copy = (char *)malloc((len + 1) * sizeof(char));
if (copy == NULL)
{
return (NULL);
}
strncpy(copy, str, len + 1);
return (copy);
}
