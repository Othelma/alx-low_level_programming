#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
 */
void times_table(void)
{
	int n, times, result;

	for (n = 0; n < 10; n++)
	{
		for (times = 0; times < 10; times++)
		{
			result = times * n;
			if (times == 0)
			{
				_putchar(result + '0');
			}
			if (result < 10 && times != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
