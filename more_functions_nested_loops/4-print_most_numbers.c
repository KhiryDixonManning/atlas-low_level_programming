#include "main.h"
/**
 *print_most_numbers - print numbers
 *
 *Return: always return 0
 */
void print_most_numbers(void)
{
int i = 0;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
_putchar(48 + i);
}
_putchar('\n');
i++;
}
