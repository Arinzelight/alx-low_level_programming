#include "main.h"

/**
 * print_nine_times_table - Prints the 9 times table starting from 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int result = i * 9;
		putchar((result / 10) + '0'); 
		putchar((result % 10) + '0'); 
		putchar('\n');
	}
}
