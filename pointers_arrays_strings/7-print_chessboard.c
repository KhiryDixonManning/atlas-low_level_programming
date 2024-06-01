#include "main.h"
/**
 *print_chessboard - print chessboard
 *@a: checked output
 *
 *Return: always return 0
 */
void print_chessboard(char (*a)[8])
{
	int size = 8;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
