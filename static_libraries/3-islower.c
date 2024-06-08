#include "main.h"
/**
 *_islower - prints lowercase characters
 *@c: checked output
 *
 *Return: return 1 or 0
 */
int _islower(int c)
{

if (c >= 'a')
{
return (1);
}
else if (c == 'A')
{
return (0);
}
return (0);
}
