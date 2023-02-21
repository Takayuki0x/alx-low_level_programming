#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 *
 * Return: 1 if n is greater than zero, returns 0 if it's zero and
 * returns -1 if n is less than zero
*/

int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return(0);
}
else if (n > 0)
{
_putchar('+');
return(1);
}
else
{
_putchar('-');
return(-1);
}

}
