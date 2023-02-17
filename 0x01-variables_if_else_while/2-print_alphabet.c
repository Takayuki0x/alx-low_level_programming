#include <stdio.h>

/**
* main - prints the entire alphabet in lowercase
*
* Description: using the putchar function
* this program prints the entire alphabet in lowercase
* Return: 0
*/

int main(void)
{
int i;
for(i = 97; i < 123; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}