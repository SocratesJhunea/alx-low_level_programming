#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: character to be treated
 *
 * Return: always 0
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half = length / 2;
	int i;

	if (length % 2 == 1)
	{
	for (i = half; i < length; i++)
	{
	putchar(str[i]);
	}
	}
	else
	{
	for (i = half - 1; i < length; i++)
	{
	putchar(str[i]);
	}
	}
	putchar('\n');
}
