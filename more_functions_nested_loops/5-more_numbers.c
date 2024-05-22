#include "main.h"
/**
 *more_numbers - print numbers
 *
 *Return: always return 0
 */
void more_numbers(void)
{
int i = 0;
int n = 1;

for (i = 1; i <= 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n / 10) + 48);
}
_putchar((n % 10) + 48);
}
_putchar('\n');
}
}
