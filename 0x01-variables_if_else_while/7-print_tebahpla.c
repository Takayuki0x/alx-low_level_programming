#include <stdio.h>

/**
* main - prints the entire alphabet backwards
*
* Description: using the putchar function
* this program prints the entire lowercase alphabet in reverse
* Return: 0
*/

int main(void)
{
int i;
for (i = 122; i > 96; i--)
{
putchar(i);
}

putchar('\n');
return (0);
}