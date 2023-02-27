#include "main.h"
#include "unistd.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
*/

void _puts(char *str)
{
write(1, *str, 36);
}
