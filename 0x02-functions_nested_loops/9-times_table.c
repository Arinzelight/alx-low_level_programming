#include "main.h"

/**
* print_nine_times_table - Prints the 9 times table starting from 0
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * 9 + j;
			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			_putchar('\n');
		}
	}
}

