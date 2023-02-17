#include <stdio.h>

/**
* main - prints the entire alphabet bar q and e
*
* Description: using the putchar function
* this program prints the entire alphabet except c and e
* Return: 0
*/

int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if(i == 101 || i == 113)
{
}
else
{
putchar(i);
}
}

putchar('\n');
return (0);
}