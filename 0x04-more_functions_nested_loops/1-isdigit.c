#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The character to be checed
 * Return: 1 for digit character or 0 otherwise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
