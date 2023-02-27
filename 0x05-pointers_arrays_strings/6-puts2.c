#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
*/

void puts2(char *str)
{
int dexer;

for (dexer = 0; str[dexer] != '\0'; ++dexer)
{
if (dexer % 2 == 0)
_putchar(str[dexer]);
}
_putchar('\n');
}
