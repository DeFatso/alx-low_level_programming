#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow -splits two strings
 *
 * @str : parameter
 *
 * Return: string
 */
char **strtow(char *str)
{
	int i, j, k, num_words = 0, word_len;
	char **words = NULL;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		num_words++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}
	words = (char **) malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; j < num_words; j++)
	{
		while (str[i] == ' ')
			i++;
		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;
		words[j] = (char *) malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
			{
				free(words[k]);
				free(words);
				return (NULL);
			}
		}
		strncpy(words[j], str + i, word_len);
		words[j][word_len] = '\0';

		i += word_len;
	}
	words[num_words] = NULL;
	return (words);
}
