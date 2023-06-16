#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - checking if a number is positive, negaive, or zero
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
        {
                printf("%d is negaive\n", n);
        }
	return (0);
}
