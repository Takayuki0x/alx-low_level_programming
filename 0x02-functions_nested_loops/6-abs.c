#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: number to use
 *
 * Return: returns n if it's positive, or n * -1 if negative
*/

int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
