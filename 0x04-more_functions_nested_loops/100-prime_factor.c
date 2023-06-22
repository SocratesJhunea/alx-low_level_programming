#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factors of 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int y, z = 612852475143;

	for (y = 3; y < 782849; y = y + 2)
	{
	while ((z % y == 0) && (z != y))
	z = z / y;
	}
	printf("%lu\n", z);
	return (0);
}
