#include "main.h"
/**
 *_puts_recursion - print a string
 *@s: checked output
 *
 *Return: always return 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
			return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
