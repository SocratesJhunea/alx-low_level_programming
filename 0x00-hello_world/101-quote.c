#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (failure)
 */
int main(void)
{
	const char *m = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
fwrite(m, sizeof(char), sizeof(m) - 1, stdout);
return (1);
}

