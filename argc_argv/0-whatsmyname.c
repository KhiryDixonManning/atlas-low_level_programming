#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of a program
 *@argc: checked output
 *@argv: checked output
 *
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
return (0);
}
