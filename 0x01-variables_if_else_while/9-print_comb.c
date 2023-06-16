#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
	for (dig2 = dig1; dig2 < 10; dig2++)
	{
	putchar(dig1 + '0');

	putchar(dig2 + '0');

	if (dig1 != 9 || dig2 != 9)
	{
	putchar(',');

	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
