#include "main.h"

/**
 * _atoi - Converts string to int
 * @s: String to convert
 * Return: The converted int
*/

int _atoi(char *s)
{
unsigned int nmbr = 0;
int sign = 1;

do {

if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
nmbr = (nmbr * 10) + (*s - '0');

else if (nmbr > 0)
break;

} 
while (*s++);

return (nmbr * sign);
}