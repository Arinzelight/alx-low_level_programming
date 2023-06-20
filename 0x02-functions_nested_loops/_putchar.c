#include <unistd.h>
/**
 * program that prints _putchar, followed by a new line
 * 
 * Return: 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
