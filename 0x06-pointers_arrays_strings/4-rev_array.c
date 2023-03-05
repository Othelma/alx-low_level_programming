#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers.
 * @a: array
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; i++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
