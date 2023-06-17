#include <stdio.h>
#include <unistd.h>
/**
 * main -  Prints exactly and that piece of art is 
 * useful - Dora Korpar, 2015-10-19
 *
 * Return: Always 0  (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-1--19"));
	return (1);
}
