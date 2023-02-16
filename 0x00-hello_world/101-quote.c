#include <stdio.h>
#include <unistd.h>

/*
 * main - Printing Dora Korpar's quote
 *
 * Description - This program prints Dora Korpar's quote
 * without using printf or puts
 *
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful \" - Dora Korpar, 2015-10-19", 59);
	return (1);	
}
