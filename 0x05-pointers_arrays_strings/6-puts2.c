#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: character to be treated
 *
 * Return: 0 always
 */

void puts2(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z += 2)
	{
	putchar(str[z]);
	}
	putchar('\n');
}
