#include <stdio.h>

/**
* main - prints all combinations of two digit numbers
*
* Description: using the putchar function
* this program prints all combinations of two digit numbers
* Return: 0
*/

int main(void)
{
int i = 0;
int ild;
int fld;

while (i <= 99)
{
ild = (i / 10 + '0');
fld = (i % 10 + '0');

if (ild < fld)
{
putchar(ild);
putchar(fld);

if (i != 89)
{
putchar(',');
putchar(' ');
}
}
i++;
}

putchar('\n');
return (0);
}
