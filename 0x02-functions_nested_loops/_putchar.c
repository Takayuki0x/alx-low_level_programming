#include <unistd.h>

/**
 * _putchar - writes the character mychar to standard output
 * @mychar: character that should be printed
 *
 * Return: 1 on success.
 * if there is an error, -1 is returned. Errno is set appropriately
 */
int _putchar(char mychar)
{
	return (write(1, &mychar, 1));
}