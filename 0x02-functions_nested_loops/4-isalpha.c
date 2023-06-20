#include "main.h"

/**
 * _isalpha - Check for alphabetic characters
 * @c: The alphabetic character to be checked
 *
 * Return: 1 for alphabetic character or 0 for anythin else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
