#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: where the content is to be copied
 * @src: the string to be copied
 * @n: The number of characters to be copied from source.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
