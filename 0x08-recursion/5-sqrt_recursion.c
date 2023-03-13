#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * _sqrt_recursion(n, 1 / 2));
}
