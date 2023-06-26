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

	while (*s != '\0')
	{
	length++;
	s++;
	}

	for (length; length >= 0; length--)
	{
	putchar(s[length]);
	}

	putchar('\n');
}
