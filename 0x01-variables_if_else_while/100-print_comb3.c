#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digA, digB;

	for (digA = 0; digA < 10; digA++)
	{
		for (digB = digA + 1; digB < 10; digB++)
		{
			putchar(digA + '0');
			putchar(digB + '0');

			if (digA != 8 || digB != 9)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');

return (0);
}
