#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: address of the memory to be filled
 * @b: the desired value
 * @n: number oif bytes to change
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
