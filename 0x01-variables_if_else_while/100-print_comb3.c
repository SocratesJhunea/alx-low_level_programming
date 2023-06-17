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
		for (digB = digA; digB < 10; digB++)
		{
		if (digA != digB)
			{
			putchar(digA + '0');
			putchar(digB + '0');
			putchar(',');
			putchar(' ');

			break;
			}
		}
	}
	putchar('\n');

return (0);
}
