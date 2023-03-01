#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse.
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int school = 0;
	int i;

	while (*s != '\0')
	{
		school++;
		s++;
	}
	s--;
	for (i = school; i > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
