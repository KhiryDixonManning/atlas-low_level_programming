#include "main.h"
/**
 *puts_half - print second half of string
 *@str: checked output
 *
 *Return: always return 0
*/
void puts_half(char *str)
{
int i, len = 0, n = 0;

while (str[len] != '\0')
{
len++;
}
len--;
if (len >= 1)
{
n = len / 2 + 1;
for (i = n; i <= len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
