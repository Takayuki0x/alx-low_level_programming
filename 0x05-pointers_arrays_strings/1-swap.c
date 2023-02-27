#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: int a to be swapped
 * @b: int b to be swapped
*/

void swap_int(int *a, int *b)
{
int temp = *b;

*b = a;
*a = temp;
}
