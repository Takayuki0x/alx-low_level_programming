#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
*/

void rev_string(char *s)
{
int len, idx;
char character;

for (len = 0; s[len] != '\0'; ++l)
;

for (idx = 0; idx < len / 2; ++idx)
{
ch = s[idx];
s[idx] = s[len - 1 - idx];
s[len - 1 - idx] = character;
}
}
