#include <stdio.h>

/**
* main - prints all combinations of single digit numbers
*
* Description: using the putchar function
* this program prints all combinations of single digit numbers
* Return: 0
*/

int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
putchar(",");
putchar(" ");
}

putchar('\n');
return (0);
}
