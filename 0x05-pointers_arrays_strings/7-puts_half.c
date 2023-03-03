#include "main.h"

/**
 * puts_half - a function that prints the second half of a string.
 * if len is odd, n = (length_of_the_string - 1) / 2.
 * @str: input
 *
 * Return: half of the input
 */
void puts_half(char *str)
{
	int i, n, great;

	great = 0;

	for (i = 0; str[a] != '\0'; i++)
		great++;

	n = (great / 2);

	if ((n % 2) == 1)
		n = ((great - 1) / 2);

	for (i = n; str[i] ! '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
