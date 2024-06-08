#include "main.h"
/**
 *_isalpha - print alphabet characters
 *@c: checked output
 *
 *Return: return a number
 */
int _isalpha(int c)
{

if (c >= 'a' || c >= 'A')
{
return (1);
}
else if (c != 'a' || c != 'A')
{
return (0);
}
return (0);
}
