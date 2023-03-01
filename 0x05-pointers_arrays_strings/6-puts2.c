#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character.
 * @str: input
 * Return: character of a string
 */
void puts2(char *str)
{
	int school = 0;
	int a = 0;
	char *c = str;
	int b;

	while (*c != '\0')
	{
		c++;
		school++;
	}
	a = school - 1;
	for (b = 0 ; b <= t ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
