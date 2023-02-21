#include "main.h"

/**
 * _isalpha- checks if character is alphabetic
 * @c: character to check
 *
 * Return: 1 if c is a letter, returns 0 otherwise
*/

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
