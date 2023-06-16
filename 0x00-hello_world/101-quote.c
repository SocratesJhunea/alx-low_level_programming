#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 1 (failure)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    fwrite(message, sizeof(char), sizeof(message) - 1, stderr);
    return 1;
}
