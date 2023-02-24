#include "main.h"

/**
 * print_square - prints a triangle followed by a new line
 * @size: Decides the size of the triangle
*/

void print_square(int size)
{
int i, j;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
if (i == size)
{
continue;
}
_putchar('\n');
}
}
_putchar('\n');
}
