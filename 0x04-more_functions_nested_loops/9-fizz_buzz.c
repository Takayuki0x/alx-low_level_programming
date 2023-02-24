#include <stdio.h>

/**
 * main - prints Fizz for multiples of three
 * prints Buzz for multiples of five
 * prints FizzBuzz for numbers that are multiples of both three and five
 * Return: 0
*/

int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}

printf("\n");

return (0);
}
