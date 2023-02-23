#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: Decides the lenght of the line
*/

void print_diagonal(int n)
{
if (n > 0)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}

}
