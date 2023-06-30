#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int alp1;
	int alp2;

	for (alp1 = 0; alp1 < n--; alp1++)
	{
		t = a[alp1];
		a[alp1] = a[n];
		a[n] = alp2;
	}
}
