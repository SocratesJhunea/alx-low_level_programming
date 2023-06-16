#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int dig1 = '0';

	while (dig1 <= '9')
	{
		putchar(dig1);
		if (dig1 != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++dig1;
	}
	putchar('\n');
	return (0);
}
