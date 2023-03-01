#include "main.h"

/**
 * _strncat - Concatenates two strings up to the n byte
 * @src: string to contactenate
 * @dest: string to contactenate to
 * @n: Determines the bytes to concatenate up to
 * Return: Returns pointer to resulting string
*/

char *_strncat(char *dest, char *src, int n)
{

int c, i;
c = 0;

while (dest[c])
c++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = src[i];

dest[c + i] = '\0';

return (dest);
}
