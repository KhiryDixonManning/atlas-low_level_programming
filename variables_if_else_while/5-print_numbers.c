#include <stdio.h>
/**
*main - print single digits
*
*Return: always retun zero
*/
int main(void)
{
int a = 0;

while (a < 10)
{
	putchar(48 + a);
	a++;
}
putchar('\n');

return (0);
}
