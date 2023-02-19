#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("The single digits numbers of base 10 are:\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
