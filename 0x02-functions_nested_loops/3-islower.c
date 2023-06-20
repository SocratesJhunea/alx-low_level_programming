#include "main.h"

/**
 * _islower - Check for lowercase characters
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anythin else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
