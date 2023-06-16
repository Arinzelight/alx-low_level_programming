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
                    putchar(d == 9 && c == 8 && b == 7 && a == 6 ? '\n' : ',');
                    putchar(d == 9 && c == 8 && b == 7 && a == 6 ? '\0' : ' ');
                }
            }
        }
    }

    return (0);
}
