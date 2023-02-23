#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
 */
void times_table(void)
{
	int n, times, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (times = 0; times <= 9; times++)
		{
			_putchar(',');
			_putchar('_');

			result = n * times;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
