#include "main.h"

/**
 * string_toupper - a function that changes lowercase to uppercase
 * @a: pointer
 *
 * Return: a
 */
char *string_toupper(char *a)
{
	int b;

	b = 0;
	while (a[b] != '\0')
	{
		if (a[b] >= 'a' && a[b] <= 'z')
			a[b] = a[b] - 32;
		b++;
	}
	return (a);
}
