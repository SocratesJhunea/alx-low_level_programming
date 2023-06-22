#include "main.h"

/**
 * print_line - Draws straight line in terminal
 *@n: The number to be treated
 *
 * Return: 0 Always
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
