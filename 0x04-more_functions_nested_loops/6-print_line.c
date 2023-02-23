#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: Decides the lenght of the line
*/

void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
