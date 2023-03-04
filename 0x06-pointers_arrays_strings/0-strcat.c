#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: input
 * @src: input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		++a;
	}
	for (b = 0; src[b] != '\0'; ++b; ++a;)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
