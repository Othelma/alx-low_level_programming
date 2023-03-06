#include "main.h"

/**
 * leet - a function that encodes a string
 * @a: input
 *
 * Return: value corresponding to a
 */
char *leet(char *a)
{
	int b, c;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == str1[c])
			{
				a[b] = str2[c];
			}
		}
	}
	return (a);
}
