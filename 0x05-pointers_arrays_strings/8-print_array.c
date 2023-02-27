#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array to print
 * @n: amount of elements to print
*/

void print_array(int *a, int n)
{
int idx;

for (idx = 0; idx < n; ++idx)
{
if (idx != (n - 1))
printf("%d, ", a[idx]);
else
printf("%d", a[idx]);
}

printf("\n");
}
