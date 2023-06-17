#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int digA = '0';
	int digB = '0';

	while (digA <= '9')
	{
		while (digB <= '9')
		{
			if (!(digA > digB) || digA == digB)
			{
				putchar(digA);
				putchar(digB);
				if (digA == '8' && digB == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			digB++;
		}
		digB = '0';
		digA++;
	}
return (0);
}
