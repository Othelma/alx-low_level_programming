#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char aA[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(aA[i]);
	}
	for (i = 26; i < 52; i++)
	{
		putchar(aA[i]);
	}
	putchar('\n');
	return (0);
}
