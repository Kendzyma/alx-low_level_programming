#include <stdio.h>
/**
 * main - main function
 *
 * Return: This returns
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
