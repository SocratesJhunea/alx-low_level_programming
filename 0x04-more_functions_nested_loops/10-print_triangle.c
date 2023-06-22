#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size:  Is the size of the triangle
 *
 * Return: 0 Always
 */

void print_triangle(int size)
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
	for (j = 0; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
