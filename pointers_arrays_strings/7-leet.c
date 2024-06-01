#include "main.h"
/**
 *leet - encode a string
 *@a: checked output
 *
 *Return: always return 0
 */
char *leet(char *a)
{
	int i;
	int b;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

		for (i = 0; a[i] != '\0'; i++)
		{
			for (b = 0; b < 10; b++)
			{
				if (a[i] == letter[b])
				{
					a[i] = number[b];
				}
			}
		}
		return (a);
}
