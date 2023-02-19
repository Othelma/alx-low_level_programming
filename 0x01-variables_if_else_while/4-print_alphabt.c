#include <stdio.h>

/**
 * main -  a program that prints all the letters except q and e.
 * Return: 0
 */
int main(void)
{
	char abc[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
