#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: string to be converted
 *
 * Return: ther integer gotten from the string
 */
int _atoi(char *s)
{
	int a, b, n, c, d, len;

	a = 0;
	b = 0;
	c = 0;
	n = 0;
	d = 0;
	len = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && c == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2a)
				d = -d;
			n = n * 10 + d;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}
	if (c == 0)

		return (0);
	return (n);
}
