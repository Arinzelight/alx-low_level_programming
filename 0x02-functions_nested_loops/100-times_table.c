#include "main.h"

/**
 * print_times_table - Prints the time table of the input,
 * staring with 0
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)
{
	int j, k, prod;
	
	if (n >= 0 && n <= 15)
	{
	for (j = 0; j <= n; j++)
	{
	_putchar('0');
	for (k = 1; k <= n; k++)
	{
	_putchar(',');
	_putchar(' ');
	prod = j * k;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
