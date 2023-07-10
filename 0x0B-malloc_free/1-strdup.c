#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *aaa;

	int c, d = 0;



	if (str == NULL)

		return (NULL);

	c = 0;
	while (str[c] != '\0')

		c++;



	aaa = malloc(sizeof(char) * (c + 1));



	if (aaa == NULL)

		return (NULL);



	for (d = 0; str[d]; d++)

		aaa[d] = str[d];



	return (aaa);

}
