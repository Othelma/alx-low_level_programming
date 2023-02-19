#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * and then in uppercase.
 *
 * Return: 0
 */
int main(void)
{
	char abc[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
		putchar(abc[i]);

	for (i = 26; i < 52; i++)
		putchar(abc[i]);

	putchar('\n');
	return (0);
}
