#include <stdio.h>
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
}
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	print_alphabet();
	return (0);
}
