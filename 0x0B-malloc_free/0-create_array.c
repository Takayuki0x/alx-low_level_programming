#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Creates an array then initializes it with a char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *pntr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	pntr = (char *) malloc(sizeof(char) * size);

	if (pntr == NULL)
		return (0);

	while (i < size)
	{
		*(pntr + i) = c;
		i++;
	}

	*(pntr + i) = '\0';

	return (pntr);
}
