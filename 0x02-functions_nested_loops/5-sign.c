#include "main.h"
/**
 * print_sign - This is a sign
 * @n: This is the parameter
 *
 * Return: This returns type
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
