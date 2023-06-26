#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @x: character to be treated
 * @y: another character to be treated
 *
 * Return: 0 always
 */

void swap_int(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
