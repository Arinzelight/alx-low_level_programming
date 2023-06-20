#include "main.h"
/**
* function that prints 10 times the alphabet,lowercase,
* Return: void
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		
		_putchar('\n');
	}
}
