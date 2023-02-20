#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char alp;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');

	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);

	putchar('\n');
	return (0);
}
