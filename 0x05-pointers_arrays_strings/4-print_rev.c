#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: character to be treated
 *
 * Return: 0 always
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
	length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}

	putchar('\n');
}
