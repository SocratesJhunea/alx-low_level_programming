#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: character denoting string
 *
 * Return: 0 always
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}

	putchar('\n');
}

