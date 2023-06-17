#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			for (k = j + 1; k < 3; k++)
			{
				putchar(i * 100 + j * 10 + k + '0');

				if (i != 0 || j != 1 || k != 2)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
