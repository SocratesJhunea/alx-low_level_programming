#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: character to be treated
 *
 * Return: 0 always
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
	putchar(s[i]);
	i--;
	}
	putchar('\n');
}
