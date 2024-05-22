#include "main.h"
/**
 *print_square - print a square
 *@size: checked output
 *
 *Return: always return 0
 */
void print_square(int size)
{
int y;
int z;

for (y = 1; y <= size; y++)
{
for (z = 1; z <= size; z++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
