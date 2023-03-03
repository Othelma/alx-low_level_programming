#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a + l) != '\0')
	{
		a++;
	}
	for ( ; b < l ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
