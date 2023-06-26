#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the character to be treated
 *
 * Return: 0 always
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
	length++;
	end++;
	}
	end--;

	while (start < end)
	{
	char temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
}
