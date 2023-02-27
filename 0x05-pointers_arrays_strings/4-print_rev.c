#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print
*/

void print_rev(char *s)
{
int length;

while (*s != '\0')
{
length++;
++s;
}

for (--length; length >= 0; --length)
{
_putchar(s[length]);
}

_putchar('\n');
}
