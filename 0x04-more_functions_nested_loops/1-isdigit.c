#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: int to check
 * Return: returns 1 if if c is digit, returns 0 otherwise
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
