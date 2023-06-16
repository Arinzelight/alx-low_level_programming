#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int a, b, c, d;

    for (a = 0; a < 10; a++)
    {
        for (b = a + 1; b < 10; b++)
        {
            for (c = b + 1; c < 10; c++)
            {
                for (d = c + 1; d < 10; d++)
                {
                    putchar(a + '0');
                    putchar(b + '0');
                    putchar(c + '0');
                    putchar(d + '0');

                    if (!(a == 9 && b == 6 && c == 8 && d == 9))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
