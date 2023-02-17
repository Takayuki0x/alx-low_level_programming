#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - determines if n is positive or negative
 *
 * Description - assigns a random number to variable n
 * prints if n is a positive, negative, or equal to 0
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    } 
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    } 
    else 
    {
        printf("%d is negative\n", n);
    }

	return (0);
}
