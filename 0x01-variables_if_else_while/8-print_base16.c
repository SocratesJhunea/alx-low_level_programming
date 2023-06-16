#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int value;

	for (value = 0; value < 16; value++)
	{
	if (value < 10)
	putchar(value + '0');

	else
	putchar(value - 10 + 'a');
	}

	putchar('\n');

	return (0);
}
