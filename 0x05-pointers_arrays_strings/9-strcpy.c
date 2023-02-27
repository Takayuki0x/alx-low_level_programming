#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the des buffer
 * @des: Destination buffer
 * @src: Source string
 * Return: A pointer to the destination buffer
*/

char *_strcpy(char *dest, char *src);
{
int i, j = 0;

for (i = 0; src[i] != '\0'; ++i)
{
dest[j] = src[i];
++j;
}
dest[j] = '\0';

return (dest);
}
