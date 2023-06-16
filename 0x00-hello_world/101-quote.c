#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (failure)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful - Dora Korpar, 2015-10-19";
fwrite(msg, sizeof(char), sizeof(msg) - 1, stdout);
return (1);
}

