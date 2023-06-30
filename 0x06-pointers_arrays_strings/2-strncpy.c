#include "main.h"
/**
 * _strncpy - function to copy a string
 * @dest: character to be treated
 * @src: character to be treated
 * @n: character to be checked
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int alp;

	alp = 0;
	while (alp < n && src[alp] != '\0')
	{
		dest[alp] = src[alp];
		alp++;
	}
	while (alp < n)
	{
		dest[alp] = '\0';
		alp++;
	}

	return (dest);
}
