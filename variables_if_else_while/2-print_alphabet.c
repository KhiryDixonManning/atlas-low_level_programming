#include <stdio.h>
/**
 *main - print the aplphabet
 *
 *Return: always return 0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
