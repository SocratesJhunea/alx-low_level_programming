#include "main.h"

/**
 * print_number - prints an integer
 * @n: Input integer parameter
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int v = n;

	if (n < 0)
	{
	_putchar(45);
	v = -v;
	}
	if (v / 10)
	{
	print_number(v / 10);
	}
	_putchar(v % 10 + '0');
}
