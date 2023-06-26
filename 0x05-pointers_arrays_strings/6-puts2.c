#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: character to be treated
 *
 * Return: 0 always
 */

void puts2(char *str)
{

	int index = 0;

	while (str[index] != '\0')
	{
	putchar(str[index]);
	index += 2;
	}

	putchar('\n');

}
