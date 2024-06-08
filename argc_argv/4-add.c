#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - add positive numbers
 *@argc: checked output
 *@argv: checked output
 *
 *Return: always return 0
 */
int main(int argc, char *argv[])
{
	int i;
	int a;
	int result = 0;

	while (scanf("%d", &i) == 1)
	{
		result += i;
		printf("%d", result);
	}
	a = atoi(argv[i]);
		if (a < 48 || a > 57)
		{
			printf("Error\n");
			return (1);
		}
		else if (argc < 2)
		{
			printf("0\n");
		}
		return (0);
}
