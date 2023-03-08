#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be scanned
 * @c: character to be searched in the string
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
