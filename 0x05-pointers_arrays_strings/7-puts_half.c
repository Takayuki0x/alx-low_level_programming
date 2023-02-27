#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to print
*/

void puts_half(char *str)
{
int len, num;

for (len = 0; str[len] != '\0'; ++len)
;

if (len % 2 == 0)
{
for (num = len / 2; str[num] != '\0'; ++num)
_putchar(str[num]);
} 
else
{
for (num = ((len - 1) / 2) + 1; str[num] != '\0'; ++num)
_putchar(str[num]);
}
_putchar('\n');
}
