#include <stdio.h>
#include "main.h"
/**
 *main - print all arguments
 *@argc: checked output
 *@argv: checked output
 *
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
			}
	return (0);
}
