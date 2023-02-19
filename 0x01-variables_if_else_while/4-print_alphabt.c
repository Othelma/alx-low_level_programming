#include <stdio.h>

/**
 * main -  a program that prints all the letters except q and e.
 * Return: 0
 */
int main(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 'q'; && i != 'e')
			putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
