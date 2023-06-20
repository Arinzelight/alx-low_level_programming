#include "main.h"

/**
* print_nine_times_table - Prints the 9 times table starting from 0
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;
			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
