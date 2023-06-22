#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line
 *@size: The size of the square
 *
 * Return: 0 Always
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
