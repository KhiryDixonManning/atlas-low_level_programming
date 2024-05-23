#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: checked output
 *
 *Return: always return 0
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			(sign = sign * -1);
		}
		else if (*s >= 48 && *s <= 57)
		{
			result = result * 10 + (*s - 48);
			num = 1;
		}
		else if (*s == '+' || *s == ' ')
		{
		}
		else if (num == 1)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
