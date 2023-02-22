#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');
	return (0);
}
