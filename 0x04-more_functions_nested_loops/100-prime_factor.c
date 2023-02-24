#include <stdio.h>

/**
 * main - prints largest prime of 612852475143
 * Return: 0
*/

int main(void)
{
	long s = 612852475143, b;

	while (b < (s / 2))
	{
		if ((s % 2) == 0)
		{
			s /= 2;
			continue;
		}

		for (b = 3; b < (s / 2); b += 2)
		{
			if ((s % b) == 0)
				s /= b;
		}
	}

	printf("%ld\n", s);

	return (0);
}