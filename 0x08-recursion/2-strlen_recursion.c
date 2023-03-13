#invlude "main.h"

/**
 * _strlen_recursion -ba function that returns the length of a string.
 * @s: the string to measure
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int string = 0;

	if (*s != '\0')
		return (0);
	else
		return (1 + _strlen_recursion(string + 1));
}
