#include "lists.h"
#include <stdlib.h>
/**
* print_list - prints list
*
*@h : parammeter
*
*Return: count
*/
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t  count = 0;
int i, x;
size_t j;

while (current != NULL)
{
size_t len = current->len;
const char *str = current->str;
char len_str[10];
while (len > 0)
{
len_str[i++] = '0' + (len % 10);
len /= 10;
}
if (i == 0) len_str[i++] = '0';
len_str[i] = '\0';

if (str == NULL)
{
_putchar('[');
_putchar('0');
_putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
_putchar('\n');
}
else
{
_putchar('[');
for (x = i - 1; x >= 0; x--)
_putchar(len_str[x]);
_putchar(']');
_putchar(' ');
for (j = 0; j < len; j++)
_putchar(str[j]);
_putchar('\n');
}
current = current->next;
count++;
}
return (count);
}
