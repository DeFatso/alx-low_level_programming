#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - check the code for ALX School students.
 *@ac : parameter
 * @av : parameter
 * Return: string.
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char *str;
str = malloc(sizeof(char) * len);
/*str[len - 1] = '\0';*/

for (i = 0; i < ac; i++)
{
	len += strlen(av[i]) + 1;
}
malloc(sizeof(char) * len + 1);

if (ac == 0 || av == 0)
{
return (NULL);
}

for (i = 0, j = 0; i < ac; i++)
{
strcpy(&str[j], av[i]);
j += strlen(av[i]);
str[j++] = '\n';
}

return (str);
}
