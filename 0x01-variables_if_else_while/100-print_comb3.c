#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			printf("%d%d%s", a, b, (a != 8 || b != 9) ? ", " : "\n");
		}
	}

	return (0);
}
