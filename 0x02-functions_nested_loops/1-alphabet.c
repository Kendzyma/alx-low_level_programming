#include "main.h"
/**
 *print_alphabet - This prints alphabets
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
