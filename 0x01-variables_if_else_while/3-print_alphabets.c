#include <stdio.h>

/**
* main - prints the entire alphabet
*
* Description: using the putchar function
* this program prints the entire alphabet
* Return: 0
*/

int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar(i);
}

for (i = 65; i < 91; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}
