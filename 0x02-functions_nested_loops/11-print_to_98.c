#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from z to 98
 * @z: The number to start printing from
 * Return: Always 0.
 */

void print_to_98(int z)
{
	if (z <= 98)
	{
	for (; z <= 98; z++)
	{
	if (z == 98)
	{
	printf("%d", z);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", z);
	}
	}
	}
	else
	{
	for (; z >= 98; z--)
	{
	if (z == 98)
	{
	printf("%d", z);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", z);
	}
	}
	}
}
