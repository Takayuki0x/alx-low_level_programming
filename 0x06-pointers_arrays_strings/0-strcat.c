#include "main.h"

/**
 * _strcat - Concatenates two strings and overwrites the null byte
 * @src: string to contactenate
 * @dest: string to contactenate to
 * Return: Returns pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{

int t, t2;

t = 0;
while (dest[t])
t++;
for (t2 = 0; src[t2] ; t2++)
dest[t++] = src[t2];

return (dest);
}
