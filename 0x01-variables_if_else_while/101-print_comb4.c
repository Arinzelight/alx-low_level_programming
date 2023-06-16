#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
    	{
		for (b = a + 1; b < 9; b++)
        	{
			for (c = b + 1; c < 10; c++)
			{
				printf("%d%d%d%s", a, b, c, (a != 7 || b != 8 || c != 9) ? ", " : "\n");
            		}
        	}
    	}

	return (0);
}
