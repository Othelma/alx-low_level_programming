#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("The single digit numbers of base 10 are:\n");

	for (i = 1; i < 10; i++)
	{
		printf("%d \t", i);
	}
	return (0);
}
