#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: character to be treated
 * @s2: character to be treated
 *
 * Return: s1[y] - s2[y]
 */
int _strcmp(char *s1, char *s2)
{
	int y;

	y = 0;
	while (s1[y] != '\0' && s2[y] != '\0')
	{
		if (s1[y] != s2[y])
		{
			return (s1[y] - s2[y]);
		}
		y++;
	}
	return (0);
}
