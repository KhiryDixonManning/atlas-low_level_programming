#include "main.h"
/**
 *_strlen - length of string
 *@s: checked output
 *
 *Return: always return 0
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
/**
 *print_rev - print reverse
 *@s: checked output
 *
 *Return: always return 0
 */
void print_rev(char *s)
{
int i;

for (i = _strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
