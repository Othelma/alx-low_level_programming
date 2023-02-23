#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked.
 *
 * Return: 1 if character is a letter,lowercase or uppercase and 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
