#include "main.h"

/**
 * print_alphabet_x10 - using 2 _putchar
 * this program prints the entire alphabet in lowercase 10 times
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
char i;
int d;

for (d = 0; d < 10; d++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
    

}
