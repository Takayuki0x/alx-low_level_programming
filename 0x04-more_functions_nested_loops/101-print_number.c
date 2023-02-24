#include "main.h"

/**
 * print_number - using only _putchar
 * prints an integer
 * @n: int to be printed
*/

void print_number(int n)
{
unsigned int j = n;

if (n < 0)
{
_putchar('-');
j = -j;
}

if ((j / 10) > 0)
{
print_number(j / 10);
}

_putchar((j % 10) + '0');
}
