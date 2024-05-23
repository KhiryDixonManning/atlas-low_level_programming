#include "main.h"
/**
 *swap_int - swap values
 *@a: checked output
 *@b: checked output
 *
 *Return: always return 0
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
