#include "main.h"

/**
 * _islower - checks if character is lowercase or not
 * @c: character to check
 *
 * Return: 1 if c is lowercase, returns 0 otherwise
*/

int _islower(int c)
{
if(c > 96 && c < 123)
{
return (1);
}
else 
{
return (0);
}
}
